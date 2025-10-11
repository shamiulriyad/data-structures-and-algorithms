#include<bits/stdc++.h>
using namespace std;

vector<int> graph[100];
bool visited[100];

void dfs(int sourse) {
    stack<int>s;
    visited[sourse] = true;
    s.push(sourse);
    while(!s.empty()){
        int u=s.top();
        s.pop();

        cout << u << " ";

        for(int v:graph[u]){
            if(!visited[v]){
                visited[v]=true;
                s.push(v);
            }
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
/*

6 7
1 2
1 3
2 4
2 5
3 5
4 6
5 6
1



*/
