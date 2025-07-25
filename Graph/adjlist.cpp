#include<bits/stdc++.h>
using namespace std;
vector<int>graph[100];
int main(){
    int node,edge;
    cin >> node >> edge;
    for(int i=0;i<edge;i++){
        int u,v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i=0;i<node;i++){
        cout << i << endl;
        for(int j=0; j< graph[i].size();j++){
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}