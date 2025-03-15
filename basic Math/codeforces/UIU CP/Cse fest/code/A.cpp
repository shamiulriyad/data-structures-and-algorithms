#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,b,p;
    cin >> n >> b >> p;
    int tbotol=0;
    int ttowel = n*p;
    while(n>1){
        int match = n/2;
        tbotol+=match*(2*b+1);
        if(n%2==0) n=n/2;
        else n=(n/2)+1;
        
    }
    cout << tbotol << " " << ttowel << endl;
}