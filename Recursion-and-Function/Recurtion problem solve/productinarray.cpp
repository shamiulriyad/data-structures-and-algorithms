#include <bits/stdc++.h>
using namespace std;
int productArray(int array[], int n, int ind=0){

    if(ind==n) return 1;
    cout << array[ind] << " ";
    return array[ind]*productArray(array,n,ind + 1);

}

void solve(int tc)
{
    int n;

    cin >>n ;
    int array[n];
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    cout << productArray(array,n)<< endl;




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

