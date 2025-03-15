#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int a[], int n){
    for(int i = 0; i < n - 1; i++){ // Run for n-1 iterations
        for(int j = 0; j < n - i - 1; j++){ // Last i elements are already sorted
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
}

void solve(int tc)
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    bubble_sort(a, n);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl; // Ensure proper output formatting
}

signed main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int tc, tt = 1;
    cin >> tt;
    
    for(tc = 1; tc <= tt; tc++)
    {
        solve(tc);
    }

    return 0;
}
