#include<bits/stdc++.h>
using namespace std;
vector<int>prime;
int primeFactor[SIZE];
void factorize(int n){
    int  sqrtn = sqrt(n);
    for(int i=0; i<prime.size()&&prime[i]<=sqrtn;i++){
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                n/=prime[i];
                primeFactor[prime[i]]++;
            }
            sqrtn = sqrt(n);

        }
    }
    if(n!=1){
        primeFactor[n]++;
    }
}
void factFactorize(int n){
    for(int i=2;i<=n;i++){
        factorize(i);
    }
    for(int i=0;i<prime.size();i++){
        cout << prime[i] << primeFactor[prime[i]] << endl;
    }
}
int main(){
    int n;
    cin >> n;
     factorize(n) ;

}