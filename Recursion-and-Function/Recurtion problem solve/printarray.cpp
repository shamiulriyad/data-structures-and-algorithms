#include <bits/stdc++.h>
using namespace std;
void printarray(int array[], int n, int ind=0){

    if(ind==n) return;
    cout << array[ind] << " ";

    printarray(array,n,ind+1);





}

void solve(int tc)
{
    int n,a;

    cin >>n >> a;
    int array[a];
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    printarray(array,n);



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

