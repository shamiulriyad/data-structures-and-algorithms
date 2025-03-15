#include <bits/stdc++.h>
using namespace std;

int binary_search(int a[], int n, int x) {
    int left, right, mid;
    left = 0;
    right = n - 1;
    
    while (left <= right) {
        mid = (left + right) / 2;
        if (a[mid] == x) {
            return mid;
        }
        if (a[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

void solve(int tc) {
    int n, x;
    cin >> n >> x;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end()); 

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    int index = binary_search(a.data(), n, x);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int tc, tt = 1;
    cin >> tt;

    for (tc = 1; tc <= tt; tc++) {
        solve(tc);
    }

    return 0;
}
