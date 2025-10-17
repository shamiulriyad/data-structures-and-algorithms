#include <bits/stdc++.h>
using namespace std;

// Node of adjacency list (stores neighbor and edge weight)
class AdjListNode {
public:
    int vertex;
    int weight;
    AdjListNode(int vertex, int weight) {
        this->vertex = vertex;
        this->weight = weight;
    }
};

// Function to print adjacency list (for debugging)
void printAdjList(vector<vector<AdjListNode>> &adj, int V) {
    cout << "************** Adjacency List **************\n";
    for (int i = 0; i < V; i++) {
        cout << i << " -> ";
        for (auto node : adj[i]) {
            cout << "(" << node.vertex << ", " << node.weight << ") ";
        }
        cout << endl;
    }
    cout << "********************************************\n";
}

// Prim’s Algorithm to find MST cost
int primsMST(vector<vector<AdjListNode>> &adj, int V, int start) {
    vector<int> key(V, INT_MAX);
    vector<bool> inMST(V, false);
    vector<int> parent(V, -1);

    // Min-heap: (weight, vertex)
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    key[start] = 0;
    pq.push({0, start});

    int totalCost = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        int wt = pq.top().first;
        pq.pop();

        if (inMST[u]) continue; // already included
        inMST[u] = true;
        totalCost += wt;

        for (auto &neighbor : adj[u]) {
            int v = neighbor.vertex;
            int w = neighbor.weight;

            if (!inMST[v] && w < key[v]) {
                key[v] = w;
                parent[v] = u;
                pq.push({w, v});
            }
        }
    }

    cout << "\nEdges in MST:\n";
    for (int i = 1; i < V; i++) {
        if (parent[i] != -1)
            cout << parent[i] << " - " << i << " (weight = " << key[i] << ")\n";
    }

    return totalCost;
}

int main() {
    int V, E;
    //cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<vector<AdjListNode>> adj(V);

   // cout << "Enter edges (u v w):\n";
    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back(AdjListNode(v, w));
        adj[v].push_back(AdjListNode(u, w)); // Undirected graph
    }

    printAdjList(adj, V);

    int start = 0;
    int cost = primsMST(adj, V, start);

    cout << "\nTotal cost of MST = " << cost << endl;
    return 0;
}

