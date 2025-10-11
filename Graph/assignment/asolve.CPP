#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int u,v,w;
    double logw;
};

int findParent(int u, vector<int>& parent){

    if(u==parent[u]) return u;


    return parent[u]=findParent(parent[u],parent);
}

void unionSets(int u,int v,vector<int>& parent,vector<int>& rank){

    u=findParent(u,parent);
    v=findParent(v,parent);

    if(u!=v){
        if(rank[u]<rank[v]) swap(u,v);

        parent[v]=u;


        if(rank[u]==rank[v]) rank[u]++;


    }




}

int main(){
    int n,m;
    cin>>n>>m;
    vector<Edge> edges(m);
    for(int i=0;i<m;i++){
        cin>>edges[i].u>>edges[i].v>>edges[i].w;



        edges[i].logw=log(edges[i].w);


    }

    sort(edges.begin(),edges.end(),[](const Edge &a,const Edge &b){

        return a.logw<b.logw;

    });

    vector<int> parent(n),rank(n,0);

    for(int i=0;i<n;i++) parent[i]=i;

    double sumLog=0;
    long long product=1;
    vector<pair<int,int>> mst;

    for(int i=0;i<m;i++){
        int u=edges[i].u;
        int v=edges[i].v;
        int w=edges[i].w;
        double logw=edges[i].logw;
        int pu=findParent(u,parent);
        int pv=findParent(v,parent);
        if(pu!=pv){
            unionSets(pu,pv,parent,rank);

            product*=w;

            mst.push_back({u,v});

        }


    }

    cout<<"Edges : \n";

    for(auto &p:mst) cout<<p.first<<" - "<<p.second<<"\n";

    cout<<"Minimum product: "<<product<<"\n";

    return 0;
}
