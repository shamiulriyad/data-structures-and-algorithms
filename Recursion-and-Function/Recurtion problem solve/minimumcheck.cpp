#include <bits/stdc++.h>
using namespace std;
int findmax(int array[], int n, int ind=0){

    if(ind==n-1) return array[ind];
    int minimum=findmax(array,n,ind+1);

    return min(array[ind],minimum);





}

void solve(int tc)
{
    int n;

    cin >>n ;
    int array[n];
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
   cout << findmax(array,n) << endl;



}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt = 1;
    cin >> tt;

    for(tc = 1; tc <= tt; tc++)
    {
        solve(tc);
        cout << endl;
    }

    return 0;
}

