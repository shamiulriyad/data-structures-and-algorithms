#include <bits/stdc++.h>
using namespace std;

int memo[20];

void initializeMemo(int n){
    for(int i=0; i<20; i++){  
        memo[i] = -1;
    }
    memo[0] = 0;
    memo[1] = 1;
}

void printmemo(int n){
    cout << "**************memo******************" << endl;
    for(int i=0; i<=n; i++){
        cout << "memo[" << i << "] = " << memo[i] << endl;
    }
    cout << "******************************" << endl;
}

int fibonacchi(int n){
    if(n==0) return 0;
    if(n==1) return 1;

    if(memo[n] != -1) return memo[n];

    memo[n] = fibonacchi(n-1) + fibonacchi(n-2);
    return memo[n];
}

int main(){
    int n;
    cin >> n;
    initializeMemo(n);
    cout << fibonacchi(n) << endl;
    printmemo(n);
    return 0;
}
