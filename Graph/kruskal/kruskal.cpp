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

int parent[100];

void makeSet(int v){
    parent[v]=v;
}

int findSet(int v){ // find leader
    if(parent[v]==v){
        return v;
    }else{
        return findSet(parent[v]);
    }
}

void vertexUnion(int a, int b){
    int u = findSet(a);
    int v = findSet(b);
    if(u==v){
        cout<<"Already in the same set"<<endl;
    }else{
        parent[v]=u;
    }
}

bool comparator(Edge a, Edge b){
    if(a.w<b.w){
        return true;
    }else{
        return false;
    }
}

void Kruskal(vector <Edge> edgeList, int V, int E){
    vector <Edge> selectedEdges;
    for(int i=1;i<=V;i++){
        makeSet(i);
    }
    sort(edgeList.begin(),edgeList.end(),comparator);

    for(Edge e: edgeList){
        int u = e.u;
        int v = e.v;

        if(findSet(u)!=findSet(v)){
            selectedEdges.push_back(e);
            vertexUnion(u,v);
        }
    }

    cout<<"Selected edges"<<endl;
    for(Edge e: selectedEdges){
        cout<<"("<<e.u<<","<<e.v<<","<<e.w<<")"<<endl;
        //int ans= w*w;

    }
    int ans =0;
    for(Edge e : selectedEdges){
        ans=w*w;
    }
    cout << ans;
   




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
    Kruskal(edgeList,V,E);

    return 0;
}
/*
7 11
1 7 8
1 6 14
1 2 2
2 6 25
2 3 19
3 6 17
3 5 5
3 4 9
4 5 1
5 6 13
6 7 21
*/
