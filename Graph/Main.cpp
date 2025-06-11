#include <bits/stdc++.h>
using namespace std;


int adj[100][100];
void solve(int tc)
{
    int n,m,q;
    cin >> n>> m;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            adj[i][j]=0;
        }
    }
    int u,v;
    for(int i=0; i<m;i++){
        cin >> u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    cin >> q;
    for(int i=0; i<q;i++){
        cin  >> u >> v;
        if(adj[u][v]!=0)cout << "yes";
        else cout << "no";
        cout << '\n';
    }
   
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
