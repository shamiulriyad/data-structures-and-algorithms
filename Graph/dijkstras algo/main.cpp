#include<bits/stdc++.h>

using namespace std;

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
    distance[sourse]=0;

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
    q.push({0,sourse});
    while(!q.empty()){
        auto[ww,u]=q.top();
        q.pop();
        if(distance[u]!=ww) continue;
        for(auto[v,w] : graph[u]){
            if(distance[u]+w<distance[v]){
                distance[v]=distance[u]+w;
                q.push({distance[v],v});
            }
        }
    }
    for(int i=0;i<vertex;i++){
        if(distance[i]==1e9) cout << "INF" << endl;
        else{
            cout << distance[i] << " " << endl;
        }
    }
    cout << endl;






}