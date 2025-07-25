#include<bits/stdc++.h>
using namespace std;
int graph[500][500];
int main(){
    int node,edge;
    cin >> node >> edge;
    for(int i=0; i<edge;i++){
        int a, b;
        cin >> a >> b;
        graph[a][b]=1;
        graph[b][a]=1;
    }
    for(int i=0; i<node;i++){
        cout << i << endl;
        for(int j=0; j<node;j++){
            cout << graph[i][j] << " ";
            
        }
        cout << endl;

    }





}
