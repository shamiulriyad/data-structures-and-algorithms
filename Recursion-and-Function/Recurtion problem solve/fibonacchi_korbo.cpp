#include <bits/stdc++.h>
using namespace std;
int fibokorbo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    return fibokorbo(n-1)+fibokorbo(n-2);


}

void solve(int tc)
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
            cout << fibokorbo(i)<< " " <<endl;

    }
    cout << fibokorbo(n)<< endl;


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

