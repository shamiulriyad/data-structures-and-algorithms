#include <bits/stdc++.h>
using namespace std;

// ---------------------------
// Full Segment Tree Template
// Supports: Range Sum, Range Minimum, Range Maximum
// ---------------------------

struct SegmentTree {
    int n;
    vector<long long> a;       // Original array
    vector<long long> treeSum; // Sum tree
    vector<long long> treeMin; // Min tree
    vector<long long> treeMax; // Max tree

    // Constructor
    SegmentTree(vector<long long> &arr) {
        a = arr;
        n = a.size();
        treeSum.resize(4*n);
        treeMin.resize(4*n);
        treeMax.resize(4*n);
        build(1, 0, n-1);
    }

    // Build function
    void build(int node, int start, int end) {
        if(start == end) {
            treeSum[node] = a[start];
            treeMin[node] = a[start];
            treeMax[node] = a[start];
        } else {
            int mid = (start + end) / 2;
            build(2*node, start, mid);
            build(2*node+1, mid+1, end);
            treeSum[node] = treeSum[2*node] + treeSum[2*node+1];
            treeMin[node] = min(treeMin[2*node], treeMin[2*node+1]);
            treeMax[node] = max(treeMax[2*node], treeMax[2*node+1]);
        }
    }

    // Query sum in range [l, r]
    long long querySum(int node, int start, int end, int l, int r) {
        if(r < start || end < l) return 0; // Outside
        if(l <= start && end <= r) return treeSum[node]; // Inside
        int mid = (start + end) / 2;
        return querySum(2*node, start, mid, l, r) + 
               querySum(2*node+1, mid+1, end, l, r);
    }

    // Query min in range [l, r]
    long long queryMin(int node, int start, int end, int l, int r) {
        if(r < start || end < l) return LLONG_MAX;
        if(l <= start && end <= r) return treeMin[node];
        int mid = (start + end) / 2;
        return min(queryMin(2*node, start, mid, l, r),
                   queryMin(2*node+1, mid+1, end, l, r));
    }

    // Query max in range [l, r]
    long long queryMax(int node, int start, int end, int l, int r) {
        if(r < start || end < l) return LLONG_MIN;
        if(l <= start && end <= r) return treeMax[node];
        int mid = (start + end) / 2;
        return max(queryMax(2*node, start, mid, l, r),
                   queryMax(2*node+1, mid+1, end, l, r));
    }

    // Point update: a[pos] = val
    void update(int node, int start, int end, int pos, long long val) {
        if(start == end) {
            a[pos] = val;
            treeSum[node] = val;
            treeMin[node] = val;
            treeMax[node] = val;
        } else {
            int mid = (start + end) / 2;
            if(pos <= mid) update(2*node, start, mid, pos, val);
            else update(2*node+1, mid+1, end, pos, val);
            treeSum[node] = treeSum[2*node] + treeSum[2*node+1];
            treeMin[node] = min(treeMin[2*node], treeMin[2*node+1]);
            treeMax[node] = max(treeMax[2*node], treeMax[2*node+1]);
        }
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    SegmentTree seg(arr);

    for(int i = 0; i < q; i++) {
        int type, l, r;
        cin >> type >> l >> r;
        l--; r--; // 0-based indexing
        if(type == 1) {
            cout << "Sum: " << seg.querySum(1, 0, n-1, l, r) << "\n";
        } else if(type == 2) {
            cout << "Min: " << seg.queryMin(1, 0, n-1, l, r) << "\n";
        } else if(type == 3) {
            cout << "Max: " << seg.queryMax(1, 0, n-1, l, r) << "\n";
        }
    }

    return 0;
}
