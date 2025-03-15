#include<bits/stdc++.h>
using namespace std;
int factorialdigit(int n){
    long long fact =1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    cin >> n;
    cout << factorialdigit(n) << endl;

}