#include<bits/stdc++.h>

using namespace std;
vector<int> graph[100];

bool visited[100];

void topologycalsort(int vertex){
    for(int i=0;i<vertex;i++){
        if(!visited[i]){
            dfs(i);
        }
    }
    cout << "topology sort" ;

    while(!s.empty()){
        cout<< s.pop() << " ";
        s.pop();

    }
    cout << endl;

}

void dfs(int sourse){
    stack<int>s;
    visited[sourse]=true;
    s.push(sourse);

    while(!s.empty()){
        int u=s.top();
        s.pop();

        cout << u << " ";

        for(int v  : graph[u]){
            if(!visited[v]){
                visited[v]=true;
                s.push(v);


            }
        }

    }
    cout << endl;


}

int main(){
    int vertex,edge;
    cin >> vertex >> edge;
    for(int i=0;i<edge;i++){
        int u,v;
        cin >> u >> v;
        graph[u].push_back(v);
        
    }
    int sourse;
    cin >> sourse;
    dfs(sourse);
}