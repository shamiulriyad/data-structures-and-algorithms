#include<bits/stdc++.h>

using namespace std;

vector<int>graph[100];
vector<int>visited(100);


void dfs(int sourse){
    cout << sourse << " ";
    visited[sourse]=true;
    for(int child:graph[sourse]){
        if(!visited[child]){
            dfs(child);
        }
    }
}

int main(){
    int edge,vertex;
    cin >> vertex >> edge;

    for(int i=0;i<edge;i++){
        int u,v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int sourse;
    cin >> sourse;
    dfs(sourse);
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