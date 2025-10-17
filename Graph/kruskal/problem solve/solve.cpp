#include<bits/stdc++.h>

using namespace std;


class Edge {
public:
    int u, v, w;
    Edge(int u, int v, int w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int parent[100];
 void makeset(int v){
    parent[v]=v;
 }

 int findset(int v){
    if(parent[v]==v){
         return v;
    }
    return findset (parent[v]);
 }

 void unionfind(int a,int b){
    int u=findset(a);
    int v=findset(b);

    if(u!=v){
        parent[v]=u;

    }
 }


 bool comparator(Edge a,Edge b){
    if(a.w<b.w){
        return true;
    }
    else{
        return false;
    }

}

void kruskal(vector<Edge>Egelist,int v,int e){
    vector<Edge>selectededgelist;
    int totalcost=0;
    for(int i=0;i<v;i++){
        makeset(i);
    }

    sort(Egelist.begin(),Egelist.end(),comparator);
    
    for(Edge e:Egelist){
        int u=e.u;
        int v=e.v;
        if(findset(u)!=findset(v)){
            selectededgelist.push_back(e);
            unionfind(u,v);
            totalcost+=e.w;
        }
    }
    cout << "total cost : " << totalcost << endl;
    cout << "selected edge : \n" ;
    for(Edge e: selectededgelist){
        cout << e.u << " " << e.v << " " << e.w << endl;
    }

}

// bool comparator(Edge a,Edge b){
//     if(a.w<b.w){
//         return true;
//     }
//     else{
//         return false;
//     }

// }

int main(){
    vector<Edge>Egelist;
    int vertex,edge;
    cin >> vertex>> edge;

    for(int i=0;i<edge;i++){
        int u,v,w;
        cin >> u >> v >> w;
        Edge edge(u,v,w);
        Egelist.push_back(edge);

        
    }
    kruskal(Egelist, vertex, edge);

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

