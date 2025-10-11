#include<bits/stdc++.h>

using namespace std;


struct AdjListNode
{
    int vertex;
    int edge;
    AdjListNode(int vertex,int edge){
        this->vertex=vertex;
        this->edge=edge;
    }
    
};


void printadj(vector<vector<AdjListNode>>adjListVector,int v){
    cout << "**********************adjlist*******************";
    for(int i=1;i<=v;i++){
        for(AdjListNode n: adjListVector[i]){
            cout << "("<< n.vertex << "," << n.edge << ")"<< " ";

        }
        cout << endl;
    }
    cout << "\n ***********************adjlist*************************";

}


int main(){
    int vertex,edge;
    cin >> vertex >> edge;
    vector<vector<AdjListNode>> adjlistvector;
    for(int i=0;i<vertex;i++){
        vector<AdjListNode>nodevector;
        adjlistvector.push_back(nodevector);

    }
    for(int i=0;i<edge;i++){
        int u,v,w;
        cin >>u >>v >>w;
        AdjListNode n1 (v,w);
         AdjListNode n2 (u,w);

        adjlistvector[u].push_back(n1);
        adjlistvector[v].push_back(n2);

    }
}