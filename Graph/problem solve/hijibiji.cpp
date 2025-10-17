#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    int vertex;
    int weight;
    Edge(int vertex, int weight) {
        this->vertex = vertex;
        this->weight = weight;
    }
};

void printAdjList(vector<vector<Edge>>& adj, int v) {
    cout << "*************** Adjacency List ***************\n";
    for (int i = 0; i < v; i++) {
        cout << i << " -> ";
        for (auto node : adj[i]) {
            cout << "(" << node.vertex << ", " << node.weight << ") ";
        }
        cout << endl;
    }
    cout << "**********************************************\n";
}

int primsAlgo(vector<vector<Edge>>& adj, int v, int start) {
    vector<int> key(v, INT_MAX);
    vector<bool> inMST(v, false);
    vector<int> parent(v, -1);

    // min heap (weight, vertex)
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    key[start] = 0;
    pq.push({0, start});

    int totalCost = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        int wt = pq.top().first;
        pq.pop();

        if (inMST[u]) continue;

        inMST[u] = true;
        totalCost += wt;

        for (auto& neighbor : adj[u]) {
            int v2 = neighbor.vertex;
            int w = neighbor.weight;

            if (!inMST[v2] && w < key[v2]) {
                key[v2] = w;
                parent[v2] = u;
                pq.push({w, v2});
            }
        }
    }

    cout << "\nEdges in MST:\n";
    for (int i = 1; i < v; i++) {
        if (parent[i] != -1)
            cout << parent[i] << " - " << i << "  (" << key[i] << ")\n";
    }

    cout << "\nTotal cost of MST: " << totalCost << endl;

    return totalCost;
}

int main() {
    int vertex, edge;
    cin >> vertex >> edge;

    vector<vector<Edge>> adj(vertex);

    for (int i = 0; i < edge; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back(Edge(v, w));
        adj[v].push_back(Edge(u, w));
    }

    printAdjList(adj, vertex);
    primsAlgo(adj, vertex, 0);
}
