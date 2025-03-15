#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >>b;
    if((a&(1<<b))!=0)//leftshift///..... rightshift logic (n>>i)&1==0)
    {
        cout << 1;
    }
    else{
        cout << 0;
    }
  
}