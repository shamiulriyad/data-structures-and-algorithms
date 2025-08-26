#include <bits/stdc++.h>
using namespace std;

fact_kortisi(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
            return 1;

    }
    else{
        return n*fact_kortisi(n-1);
    }


}


void solve(int tc)
{
    int n;
    cin >> n;

    cout << fact_kortisi(n) << endl;


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
