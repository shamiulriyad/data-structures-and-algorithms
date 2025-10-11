#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int WHITE = 1;
int GRAY = 2;
int BLACK = 3;

int d[100];
int p[100];
int color[100];


void BFS(vector<vector<int>> adjList, int V, int E, int s){
    for(int i=1;i<=V;i++){
        d[i]=1e9;
        p[i] = -1;
        color[i] = WHITE;
    }

    d[s]=0;
    p[s]=-1;
    color[s]=GRAY;
    queue<int> Q;
    Q.push(s);

    while(!Q.empty()){
        int u = Q.front();
        Q.pop();
        color[u]=BLACK;
        //cout<<"you dequeued the vertex "<<u<<endl;
        for (int v:adjList[u]){
            if(color[v]==WHITE){
                color[v]=GRAY;
                Q.push(v);
                p[v]=u;
                d[v]=d[u]+1;
            }
        }
    }


}


int main(){

    int V, E;
    cout<<"Enter the number of vertices and edges"<<endl;
    cin>>V>>E;

    vector<vector<int>> adjList;
    for(int i=0;i<=V;i++){
        vector<int> v;
        adjList.push_back(v);
    }

    for(int i=1;i<=E;i++){
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    cout<<"*********adjList**************"<<endl;
    for(int i=1;i<=V;i++){
        for(int v: adjList[i]){
            cout<<v<<" ";
        }
        cout<<endl;
    }
    cout<<"\n*********adjList**************"<<endl;

    BFS(adjList,V, E, 2);
    cout<<"The vertex properties after BFS"<<endl;
    for(int i=1;i<=V;i++){
        cout<<"vertex "<<i<<" color:"<<color[i]<<" distance:"<<d[i]<<" parent:"<<p[i] <<endl;
    }

}
/*
8 9 
1 2
1 5
2 6
6 3
6 7
3 7
7 8
3 4
4 8
*/
