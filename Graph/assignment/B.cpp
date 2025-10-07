#include <bits/stdc++.h>
using namespace std;

void printPath(vector<int>& parent, int v) {
    if (parent[v] == -1) {
        cout << v;
        return;
    }
    printPath(parent, parent[v]);
    cout << "->" << v;
}

int main() {
    int node, edge;
    cout << "Enter the number of vertices and edges \n";
    cin >> node >> edge;

    vector<pair<int, int>> graph[node + 1];

    int source;
    cout << "Enter the source vertex :  \n";
    cin >> source;

    cout << "Enter the edges (u,v,w) \n";
    for (int i = 0; i < edge; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w}); // directed
        // for undirected: graph[v].push_back({u, w});
    }

    vector<int> distance(node + 1, 1e9);
    vector<int> parent(node + 1, -1);

    distance[source] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, source});

    while (!pq.empty()) {
        auto [dist, u] = pq.top();
        pq.pop();

        if (dist != distance[u]) continue;

        for (auto [v, w] : graph[u]) {
            if (distance[u] + w < distance[v]) {
                distance[v] = distance[u] + w;
                parent[v] = u;
                pq.push({distance[v], v});
            }
        }
    }

    for (int i = 1; i <= node; i++) {
        cout << "Path from source to vertex " << i << " -> ";
        if (distance[i] == 1e9) {
            cout << "No Path\n";
        } else {
            printPath(parent, i);
            cout << "\nDistance:" << distance[i] << "\n";
        }
    }

    return 0;
}
/*

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