Fenwick Tree (Binary Indexed Tree)

Supports:

Prefix Sum

Point Update

Range Sum

Structure:

Array-based implicit tree

bit[i] stores sum of range i - (i & -i) + 1 to i

Example: array [3,2,4,5]

Index: 1  2  3  4
BIT:   3  5  4 14


bit[1] = 3

bit[2] = 3+2 = 5

bit[3] = 4

bit[4] = 3+2+4+5 = 14

Code:
#include <bits/stdc++.h>
using namespace std;

struct FenwickTree {
    int n;
    vector<long long> bit;

    FenwickTree(int size){
        n = size;
        bit.assign(n+1,0); // 1-based indexing
    }

    void update(int idx,long long val){
        while(idx<=n){
            bit[idx]+=val;
            idx += idx & -idx;
        }
    }

    long long query(int idx){
        long long res=0;
        while(idx>0){
            res+=bit[idx];
            idx -= idx & -idx;
        }
        return res;
    }

    long long rangeQuery(int l,int r){
        return query(r) - query(l-1);
    }
};

✅ Summary of Operations
Feature	Segment Tree	Fenwick Tree (BIT)
Range Sum Query	O(log n)	O(log n)
Range Min/Max Query	O(log n)	❌ not supported
Point Update	O(log n)	O(log n)
Range Update (Lazy Prop)	O(log n)	❌ needs trick
Space	O(4*n)	O(n)