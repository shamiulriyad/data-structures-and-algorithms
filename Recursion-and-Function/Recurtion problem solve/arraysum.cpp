#include <bits/stdc++.h>
using namespace std;

int printarray(int array[], int n, int ind=0) {
    if(ind==n) return 0;
    cout << array[ind] << " ";
    return array[ind] + printarray(array, n, ind+1); // accumulate
}

void solve(int tc) {
    int n;
    cin >> n;
    int array[n];
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    int sum = printarray(array,n);
    cout << "\nSum = " << sum << endl;
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt = 1;
    cin >> tt;

    for(tc = 1; tc <= tt; tc++) {
        solve(tc);
        cout << endl;
    }
    return 0;
}
