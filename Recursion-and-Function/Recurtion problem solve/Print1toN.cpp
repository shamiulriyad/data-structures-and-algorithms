#include<bits/stdc++.h>
using namespace std;
int count(int n, int i){
    if(n>i){
        cout << i << " ";
        count(n,i+1);
    }
}
int main(){
    int n,i;
    cin >> n >> i;;
    count(n,i);

}