#include<bits/stdc++.h>
using namespace  std;


int dist[100];
int parent[100];

void relax(int u,int v,int w){
    if(dist[v]>dist[u]+w){
        dist[v]=dist[u]+w;
        parent[v]=u;
    }
}



void ballmanford(vector<edge>eg)
int main(){
    vector<edge>edgelist;

    int v,e;
    cin >> v >> e;

    for(int i=0;i<e;i++){
        int u,v,w;
        cin >> u >> v >>w;
        edge ege(u,v,w);
        edgelist.push_back(ege);

    }
}