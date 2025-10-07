#include<bits/stdc++.h>
using namespace std;

void printPath(vector<int>&parent,int v){
    if(parent[v]==-1){
        cout << v;
        return;
    }
    printPath(parent,parent[v]);
    cout << "->" << v;
}

int main(){
    int vertex, edge;
    cout <<"Enter the number of vertices and edges " << endl;
    cin >> vertex >> edge;

    vector<pair<int,int>> graph[vertex+10];
    int source;
    cout << "Enter the source vertex : "<< endl;
    cin >> source;

    int u,v,w;
    cout << "Enter the edges (u,v,w) " << endl;
    for(int i=0;i<edge;i++){
        cin >> u >> v >> w;
        graph[u].push_back({v,w});
       
    }

    vector<long long> distance(vertex+10, 1e18);
    vector<int> edgecount(vertex+10, INT_MAX);
    vector<int> parent(vertex+10, -1);

    distance[source] = 0;
    edgecount[source] = 0;

    
    priority_queue<pair<int, pair<long long,int>>, vector<pair<int,pair<long long,int>>>, greater<>> q;
    q.push({0,{0,source}});

    while(!q.empty()){
        auto curr = q.top(); q.pop();
        int curredge = curr.first;
        long long curdist = curr.second.first;
        int u = curr.second.second;

        if(curredge > edgecount[u]) continue;

        for(auto [v,w] : graph[u]){
            long long newdist = distance[u] + w;
            int newedge = edgecount[u] + 1;

            if(newedge < edgecount[v] || (newedge == edgecount[v] && newdist < distance[v])){
                edgecount[v] = newedge;
                distance[v] = newdist;
                parent[v] = u;
                q.push({newedge, {newdist, v}});
            }
        }
    }

    for(int i=1;i<=vertex;i++){
        cout <<"Path from source to vertex " << i << " -> ";
        if(distance[i] == 1e18) cout << "INF\n";
        else{
            printPath(parent,i);
            cout << "\nDistance: " << distance[i] << "\n";
        }
    }

    return 0;
}


/*

Enter the number of vertices and edges 
9 12 
Enter the source vertex :  
1 
Enter the edges (u,v,w) 
1 2 2 
8 5 100 
2 3 1 
3 4 3 
4 5 2 
1 6 1 
6 3 6 
3 7 1 
5 7 4 
7 8 1 
1 9 2 
9 8 6


*/