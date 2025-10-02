/*

1. Adjancency matrix
2.Ajjacency list

Got it! You gave edges:

01, 12, 02, 24, 34, 13
  
From the edges, nodes are: 0, 1, 2, 3, 4 → so n = 5.

Create an empty adjacency matrix (5×5)

0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0

Fill edges

Edges are:

01 → edge from 0 to 1 → matrix[0][1] = 1

12 → 1 → 2 → matrix[1][2] = 1

02 → 0 → 2 → matrix[0][2] = 1

24 → 2 → 4 → matrix[2][4] = 1

34 → 3 → 4 → matrix[3][4] = 1

13 → 1 → 3 → matrix[1][3] = 1


Final Adjacency Matrix

	0	1	2	3	4
    

0	0	1	1	0	0
1	0	0	1	1	0
2	0	0	0	0	1
3	0	0	0	0	1
4	0	0	0	0	0

*/
#include<bits/stdc++.h>
using namespace std;
//vector<int>graph[100];

// Adjacency Matrix
//undirected unweighted graph

int main(){


    int node,edges;
    cin >> node >> edges;

    vector<vector<bool>>adjAat(node,vector<bool>(node,0));

    int u,v;

    for(int i=0;i<edges;i++){

        cin >> u >> v;
        adjAat[u][v]=1;  
        adjAat[v][u]=1;
        
    }
    for(int i=0;i<node;i++){
        for(int j=0;j<node;j++){
            cout << adjAat[i][j] << " ";
        }
        cout << endl;
    }  
} 

 