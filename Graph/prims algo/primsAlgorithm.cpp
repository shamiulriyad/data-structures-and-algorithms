#include<bits/stdc++.h>
#include<vector>
#include<queue>

using namespace std;

struct AdjListNode{
    int vertex;
    int weight;
    AdjListNode(int vertex,int weight){
        this->vertex=vertex;
        this->weight=weight;
    }
};

void printAdjList(vector < vector <AdjListNode> > adjListVector, int V){
    cout<<"**************adjList***************"<<endl;
    for(int i=1;i<=V;i++){
        for(AdjListNode n:adjListVector[i]){
            cout<<"("<<n.vertex<<","<<n.weight<<")"<<" ";
        }
        cout<<endl;
    }
    cout<<"\n**************adjList***************"<<endl;
}

int key[100];
int parent[100];
bool inMST[100];

struct PQNode{
    int vertex;
    int key;
    PQNode(int vertex,int key){
        this->vertex=vertex;
        this->key=key;
    }
};

struct Comparator{
    bool operator() (PQNode a,PQNode b){
        if(a.key<b.key){
            return false;
        }else{
            return true;
        }
    }
};


void Prims(vector < vector <AdjListNode> > adjListVector,int s, int V, int E){
    for(int v=1;v<=V;v++){
        key[v]=INT_MAX;
        parent[v]=-1;
        inMST[v]=false;
    }

    key[s]=0;
    priority_queue <PQNode, vector<PQNode>  ,Comparator> pq;
    PQNode n(s,key[s]);
    pq.push(n);

    while(!pq.empty()){
        PQNode n = pq.top();
        pq.pop();

        int u = n.vertex;

        if(inMST[u]==true){
            continue;
        }

        inMST[u]=true;

        for(AdjListNode adjListNode:adjListVector[u]){
            int v = adjListNode.vertex;
            int w = adjListNode.weight;

            if(inMST[v]==false && key[v]>w){
                key[v]=w;
                parent[v]=u;
                PQNode n(v,key[v]);
                pq.push(n);

            }
        }

    }

}

int main(){
    vector < vector <AdjListNode> > adjListVector;
    int V, E;
    cout<<"Enter the number of vertices and edges"<<endl;
    cin>>V>>E;

    for(int i=0;i<=V;i++){
        vector <AdjListNode> nodeVector;
        adjListVector.push_back(nodeVector);
    }
    cout<<"Enter the edges (u,v,w)"<<endl;
    for(int i=1;i<=E;i++){
        int u,v,w;
        cin>>u>>v>>w;
        AdjListNode n1 (v,w);
        AdjListNode n2 (u,w);
        adjListVector[u].push_back(n1);
        adjListVector[v].push_back(n2);
    }

    printAdjList(adjListVector,V);
    Prims(adjListVector,1,V,E);

    for(int v=1;v<=V;v++){
        cout<<"vertex:"<<v<<" key:"<<key[v]<<", parent:"<<parent[v] <<", inMST:"<<inMST[v] <<endl;
    }
    return 0;
}

/*
8 10
1 8 6
1 2 4
8 2 5
8 7 14
7 6 3
8 6 10
6 5 8
5 4 15
2 5 2
2 3 9
*/
