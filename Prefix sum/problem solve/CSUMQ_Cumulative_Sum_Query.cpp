 // problem link :  https://www.spoj.com/problems/CSUMQ/



#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int> pre(n);
     pre[0]=a[0];
     for(int i=1;i<n;i++){
        pre[i]= pre[i-1]+a[i];
     }

     int q;
     cin >> q;
     while(q--){
        int i,j;
        cin >> i >> j;
        if(i==0){
            cout << pre[j] << endl;
        }
        else{
            cout << pre[j]-pre[i-1] << endl;
        }
     }
   
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt = 1;
  //  cin >> tt;

    for(tc = 1; tc <= tt; tc++)
    {
        solve(tc);
        
        cout << endl;
    }

    return 0;
}
