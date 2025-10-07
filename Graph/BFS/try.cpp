#include<bits/stdc++.h>


/* eikahe kahini hosse je ami akta graph er bfs korbo. tahole amr idea hosse., amk e akta source node dioya thkabe jeta thakbe amr traversel suru hobe then
ami take queue te push korbo. then ami jodi queue theke akta node ber kori tahole oi node er sob neghbour gula ke ami abar queque te push korbo. and jodi ami akta node ke quque te
push kori tahole ami oi node ke visited mark korbo jate kore ami abar oii node ke abar push na kori and abar traverse na kori . ei vabe ami jodi queue te kono node na thake tahole 
ami stop kore dibo.

*/


using namespace std;

int bfs(sourse){
    queue<int>q;
    visited[sourse]=true;
    q.push(sourse);
    while(!q.empty()){
        int u=q.fornt();
        q.pop();
        cout << u << " ";
        for(int v:graph[u]){
            if(!visited[v]){
                visited[v]=true;
                q.push();
            }
        }

        cout << endl;
    }
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