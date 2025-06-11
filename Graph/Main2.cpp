#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0)
using LL = long long;

int adj[100][100];



void pre()
{
    fastio;

    
}

void solve(int tc)
{
    int n, m, q;
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
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

    for(i = 0; i < q; i++)
    {
        cin >>u>>v;

        if(adj[u][v] != 0) cout << "YES";
        else cout << "NO";

        cout << '\n';
    }

}

signed main()
{
    pre();

    int tc, tt = 1;
    cin >> tt;
    
    for(tc = 1; tc <= tt; tc++)
    {
        // cout << "Case " << tc << ": ";
        solve(tc);
        // cout << '\n';
    }

    return 0;
}
