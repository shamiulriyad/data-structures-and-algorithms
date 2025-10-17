#include<bits/stdc++.h>

using namespace std;

int main(){
    int v,e;
    cin >> v >> e;

    vector<pair<int,int>>graph[v+10];
    int sourse;
    cin>> sourse;



    for(int i=0;i<e;i++){
        int u,v,w;
        cin >> u,v,w;
        graph[u].push_back(v);
        graph[v].push_back(u);

    }

    vector<int>distance(v+10,1e9);
    distance[sourse]=0;


    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

    pq.push({0,sourse});

    while(!pq.empty()){
        auto[ww,u]=pq.top();
        q.pop();

        if(distance[u]!=ww) continue;
        for(auto[v,w]:graph[u]){
            if(distance[u]+w<distance[v]){
                distance[v]=distance[u]+w;
                q.push({distance[v],v});
            }
        }
    }

    for(int i=0;i<v;i++){
        if(distance[i]==1e9){
            cout<< "INF"<< endl;
        }
        else{
            cout<< distance[i] << endl;
        }
    }

}