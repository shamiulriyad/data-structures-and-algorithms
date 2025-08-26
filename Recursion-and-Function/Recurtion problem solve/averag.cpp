#include <bits/stdc++.h>
using namespace std;

void printarray(int array[], int n, int ind=0,int sum=0){

    if(ind==n){
        cout << "\nSum = " << sum;
        cout << "\nAverage = " << (double)sum/n << endl;
        return;
    }

    cout << array[ind] << " ";
    sum += array[ind];

    printarray(array,n,ind+1,sum);
}

void solve(int tc)
{
    int n;
    cin >>n ;
    int array[n];
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

