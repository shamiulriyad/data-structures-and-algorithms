#include<bits/stdc++.h>

using namespace std;


class adgelist{
    public:
    int u, v, w;
    adgelist(int u, int v, int w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
    
};

int parent[100];

void makeset(int v){
    parent[v] = v;

}

int findset(int v){
    if(parent[v]==v){
        return v;

    }
    return findset(parent[v]);
}

void unionfind(int a, int b){
    int u=findset(a);
    int v=findset(b);

    if(u!=v){
        parent[v]=u;

    }
}

bool comparator(adgelist a, adgelist b) {
    return a.w < b.w;
}



void kruskal(vector<adgelist>&agev,int v ,int e ){

    vector<int> selection;
    int cost=0;
    for(int i=0;i>v;i++){
        makeset(i);
    }
    sort(agev.begin(),agev.end(),comparator);

    for(adgelist e : agev){
        int u=e.u;
        int v=e.v;

        if(findset(u)!=findset(v)){
            selection.push_back(e);
            unionfind(u,v);
            cost+=e.w;
        }
    }
    cout << cost << endl;
    for(adgelist e:agev){
        cout << e.u << e.v << e.w << endl;
    }

}



int main(){

    vector<adgelist>agev;
    int edge,vertex;
    cin>> vertex >> edge;

    for(int i=0;i<edge;i++){
        int u,v,w;
        cin >> u >> v >> w;
        adgelist age(u,v,w);
        agev.push_back(age);
    }
    kruskal(agev,vertex,edge);



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