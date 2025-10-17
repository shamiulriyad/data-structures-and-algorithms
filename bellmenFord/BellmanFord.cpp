#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Edge{
    int u,v,w;
    Edge(int u,int v,int w){
        this->u=u;this->v=v;this->w=w;
    }
};

int dist[100];
int parent[100];

void relax(int u, int v, int w){
    if(dist[v]>dist[u]+w){
        dist[v]=dist[u]+w;
        parent[v] = u;
    }

}

void printPath(int v){
    if(v==-1){
        return;
    }
    printPath(parent[v]);
    cout<<"->"<<v;

}

void BellmanFord(vector <Edge> edgeList, int V, int E, int s){
    for(int v=1;v<=V;v++){
        dist[v]=1e9;
        parent[v] = -1;
    }
    dist[s]=0;

    for(int i=1;i<=V-1;i++){
        for(Edge e : edgeList){
            int u,v,w;
            u=e.u;
            v=e.v;
            w=e.w;
            relax(u,v,w);
        }
    }

    for(int i=1;i<=V;i++){
        cout<<"vertex="<<i<<", distance = "<<dist[i]<<", parent="<<parent[i]<<endl;

    }
    cout<<"Printing all the paths from the source"<<endl;
    for(int i=1;i<=V;i++){
        printPath(i);
        cout<<endl;
    }


}


int main(){
    vector <Edge> edgeList;
    int V,E;
    cout<<"Enter the number of vertices and edges"<<endl;
    cin>>V>>E;

    for(int e = 1; e<=E ; e++){
        int u,v,w;
        cin>>u>>v>>w;
        Edge edge(u,v,w);
        edgeList.push_back(edge);
    }
    cout<<"You entered the edges :"<<endl;
    for(Edge e: edgeList){
        cout<<"("<<e.u<<","<<e.v<<","<<e.w<<")"<<endl;
    }
    BellmanFord(edgeList,V,E,1);
    return 0;
}
/*
7 10
1 2 6
1 3 5
1 4 5
2 5 -1
3 2 -2
3 5 1
4 3 -2
4 6 -1
5 7 3
6 7 3
*/
