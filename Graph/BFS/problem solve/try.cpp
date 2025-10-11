#include<bits/stdc++.h>

using namespace std;
vector<int>graph[100];
bool visited[100];

void bfs(int sourse){
    queue<int>q;
    visited[sourse]=true;
    q.push(sourse);

    while(!q.empty()){
        int u=q.front();
        q.pop();

        cout<< u <<  " ";

        for(int v:graph[u]){
            if(!visited[v]){
                visited[v]=true;
                q.push(v);
            }
        }

    }
    cout << endl;
}



int main(){
    int node,edge;
    cin >> node >> edge;
    for(int i=0;i<edge;i++){
        int u,v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int sourse;
    cin >> sourse;
    bfs(sourse);

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
1

*/