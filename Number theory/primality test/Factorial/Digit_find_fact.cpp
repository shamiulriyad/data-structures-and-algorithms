#include<bits/stdc++.h>
using namespace std;
int factorialdigit(int n){
    long long fact =1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    int res=0;
    while(fact){
        res++;
        fact/=10;
    }
    return res;
    
}
int main(){
    int n;
    cin >> n;
    cout << factorialdigit(n) << endl;

}