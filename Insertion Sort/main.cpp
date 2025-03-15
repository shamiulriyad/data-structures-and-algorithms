#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int a[], int n) {
    for(int i = 1; i < n; i++) {  
        int key = a[i];  
        int j = i - 1;
        while(j >= 0 && a[j] > key) {  
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;  
    }
}

void solve(int tc) {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    insertion_sort(a, n);
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl; 
}

signed main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int tc, tt = 1;
    cin >> tt;
    
    for(tc = 1; tc <= tt; tc++) {
        solve(tc);
    }

    return 0;
}
