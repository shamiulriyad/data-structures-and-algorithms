/*           https://leetcode.com/problems/climbing-stairs/          */







#include<bits/stdc++.h>
using namespace std;


int memo[45];

void inatializememo(int n){
    for(int i=0;i<45;i++){
        memo[i]=-1;
    }
}

void printmeo(int n){
    for(int i=0;i<n;i++){
        cout << "memo[" << i << "] = " << memo[i] << endl;
    }
    cout << "******************************" << endl;
}
int climbingstairs(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(n==2) return 2;
   // if(n==3) return 3;
    if(memo[n]!=-1) return memo[n];
    memo[n]= climbingstairs(n-1)+climbingstairs(n-2);
    return memo[n];
}

int main(){
    int n;
    cin >> n;
    inatializememo(n);
    printmeo(n);
    cout << climbingstairs(n) << endl;


}