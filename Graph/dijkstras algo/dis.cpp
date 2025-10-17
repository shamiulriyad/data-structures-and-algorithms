#include<bits/stdc++.h>
using namespace std;

int main(){

    int edge,vertex;

    cin >> edge >> vertex;

    vector<pair<int,int>>graph[vertex+10];

    for(int i=0;i<edge;i++){
        int u,v,w;
        cin >> u>> v >> w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});

    }
    int sourse;
    cin >> sourse;

    vector<int>distance(vertex+10,1e9);

    distance[sourse]=0;


    priority_queue<pair<int,int>,vector<pair<int,int>>,grater<int,int>>>pq;

    pq.push({0,sourse});



    while(!pq.empty()){
        auto[ww,u]=pq.top();
        pq.pop;

        if(distance[u]!=ww) continue;

        for(auto[w,w]:graph[u]){
            if(distance[u]+w<distance[v]){
                distance[v]=distance[u]+w;
                pq.push(distance[v],v);
            }
        }
    }

    for(int i=0;i<v;i++){
        if(distance[i]==1e9){
            cout<< "INF" << endl;
        }
        else{
            cout << distance[i];
        }
    }
}