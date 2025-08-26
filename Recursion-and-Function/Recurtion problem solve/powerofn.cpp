#include <bits/stdc++.h>
using namespace std;
int powerkorbo(int x, int y){
    if(y<0){
            return -1 ;

    }
    else if(y==0) return 0;
    int ans=1;
    for(int i=1;i<=y;i++){
        ans *=x;


    }
    return ans;






}


void solve(int tc)
{
    int x,y;
    cin >> x >> y;
    cout << powerkorbo(x,y) << endl;


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
