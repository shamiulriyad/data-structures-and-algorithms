#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
    cin >> a >> b;
    int count =0;
    for(int i=a;i<=b;i++){
       int math = sqrt(i);
       if(math*math==i){
         
         count++;
       }
    }
    cout << count << endl;

    }
    
}