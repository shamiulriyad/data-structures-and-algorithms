




#include<bits/stdc++.h>
using namespace std;
int parent[100];

void make_set(int v){
    parent[v]=v;
}
void inti(){
    for(int i=1;i<=8;i++){
        make_set(i);
    }
}

int find_set(int v){
    if(v==parent[v]){
        return v;
    }
    return find_set(parent[v]);
}

void union_set(int a, int b){
    a=find_set(a);
    b=find_set(b);

    if(a!=b){
        parent[b]=a;
    }
}
int main(){
    inti();
    for(int i=1;i<=8;i++){
        cout << "parent of " << i << " is " << parent[i] << endl;
    }

}