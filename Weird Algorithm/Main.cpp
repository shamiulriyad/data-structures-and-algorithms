#include <bits/stdc++.h>
using namespace std;
void weridalgo(long long n){
    cout << n << " ";
    if(n==1) return ;
    if(n%2==0){
        weridalgo(n/2);
    }
    else{
        weridalgo( 3*n+1);
    }

}
void solve()
{
    long long n;
    cin >> n;
    weridalgo(n);
    cout << endl;
    
   
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt = 1;
    //cin >> tt;

    for(tc = 1; tc <= tt; tc++)
    {
        solve();
        cout << endl;
    }

    return 0;
}
