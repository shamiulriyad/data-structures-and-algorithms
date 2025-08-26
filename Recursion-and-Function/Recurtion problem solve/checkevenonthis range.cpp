#include <bits/stdc++.h>
using namespace std;

int rangecheck(int n, int m){
    if(n>m) return 0;
    if(n%2==0){
        cout << n << " " << endl;
    }
    rangecheck(n+1,m);
}


void solve(int tc)
{
    int n,m;
    cin >> n >> m;
    rangecheck(n,m);


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
