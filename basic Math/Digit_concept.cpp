#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int c=0;
    while(n>0){
       int a= (n%10);
       c=c+1;
        n=n/10;
        cout << a << endl;

    }
   cout << c << endl;  // for count of degits in a number....
}