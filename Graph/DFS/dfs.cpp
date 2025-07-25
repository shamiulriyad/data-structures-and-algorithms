#include<bits/stdc++.h>
using namespace std;

vector<int> graph[100];
bool visited[100];

void dfs(int u) {
    visited[u] = true;
    cout << u << " ";

    for(int v : graph[u]) {
        if(!visited[v]) {
            dfs(v);
        }
    }
}

int main() {
    int node, edge;
    cin >> node >> edge;
    for(int i = 0; i < edge; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int source;
    cin >> source;
    dfs(source);
    cout << endl;

    return 0;
}
