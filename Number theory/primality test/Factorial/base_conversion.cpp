#include<bits/stdc++.h>
using namespace std;
int factorialdigit(int n , int base){
    double x=0;
    for(int i=2;i<=n;i++){
        x+=log10(i)/log10(base);
    }
    double eps = 1e-9;
    int res = x+1+ eps;
    return res;
    
}
int main(){
    int n, base;
    cin >> n >> base;
    cout << factorialdigit(n,base) << endl;

}