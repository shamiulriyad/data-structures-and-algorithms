#include<bits/stdc++.h>

using namespace std;

void printPath(vector<int>&parent,int v){
    if(parent[v]==-1){
        cout << v;
        return;
    }
    printPath(parent,parent[v]);
    cout << "->" << v << endl;
}

int main(){
    int vertex,edge;
    cout <<"Enter the number of vertices and edges " << endl;
    cin >> vertex>> edge;

    vector<pair<int,int>>graph[vertex+10];
    int sourse;
    cout << "Enter the sourse vertex : "<< endl;
    cin >> sourse;
    int u,v,w;
    cout << "Enter the edges (u,v,w) " << endl;
    for(int i=0;i<edge;i++){
        cin >> u >> v >> w;
        graph[u].push_back({v,w});

    }

    vector<int>distance(vertex+10,1e9);
    vector<int>edgecount(vertex+1,INT_MAX);
    vector<int> parent(vertex + 1, -1);

    distance[sourse]=0;
    edgecount[sourse]=0;

    priority_queue<pair<int,pair<long long,int>>, vector<pair<int,pair<long long,int>>>, greater<>> q;
    q.push({0,{0,source}});
    while(!q.empty()){
       auto curr = q.top(); q.pop();
    int curredge = curr.first;
    long long curdist = curr.second.first;
    int u = curr.second.second;

        //if(distance[u]!=ww) continue;
        if(curredge>edgecount[u]) continue;
        for(auto[v,w] : graph[u]){
        //     if(distance[u]+w<distance[v]){
        //         distance[v]=distance[u]+w;
        //         parent[v]=u;
                
        //         q.push({distance[v],v});
        //     }
        // }
        long long newdist = distance[u] + w;
int newedge = edgecount[u] + 1;

if(newedge < edgecount[v] || (newedge == edgecount[v] && newdist < distance[v])){
    edgecount[v] = newedge;
    distance[v] = newdist;
    parent[v] = u;
    q.push({newedge, {newdist, v}});
}

    }
    for(int i=0;i<vertex;i++){
        cout <<"path from source to vertex " << i  << " -> ";

        if(distance[i]==1e9) cout << "INF" << endl;
        else{
            printPath(parent,i);
            cout << distance[i] << " " << endl;
        }
    }
    cout << endl;






}
}