#include<bits/stdc++.h>
using namespace std;
vector<int>graph[100];
bool visited[100];

void bfs(int sourse){
    queue<int>q;
    visited[sourse]=true;
    q.push_back(u);

    while(!q.empty()){
        int u=q.front();
        q.pop();
        cout << u << endl;
        for(v:graph[u]){
            if(!visited[v]){
                visited[v]=true;
                q.push_back(v);


            }

        }
        //cout 

    }
    cout << endl;

}

int main(){
    int n,vertex,edge;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> vertex >> edge;
        graph[u].push_back(v);
        graph[v].push_back(u);

    }
    int sourse;

    cin >> sourse;
    bfs(sourse);
}