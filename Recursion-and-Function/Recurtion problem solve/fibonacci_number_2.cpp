#include<iostream>
using namespace std;
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    for(int i=0; i<=n ; i++){
        int prvfib = fib(n-1)+fib(n-2);
        return prvfib ;

    }
}
int main(){
    int n;
    cin >> n;
    cout << fib(n) << endl;
}