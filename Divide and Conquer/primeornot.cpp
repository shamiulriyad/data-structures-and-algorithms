#include<bits/stdc++.h>
using namespace std;
int isprime(int n){
    if(n<2)return false;
    for(int i=2;i*i<=n;i++){
        if(n%i ==0 ) return false;
    }
    return true;
}

int primecount( vector<int> &a,int n,int count=0,int start=0,int end=0){
    if(start > end) return 0;
    if(start ==end){
        if(isprime(a[start])) return 1;
        else return 0;
    }
    
   int  mid=(start+end)/2;
   int leftcout= primecount(a,n,count,start,mid);
   int rightcount=primecount(a,n,count,mid+1,end);
   return leftcout + rightcount;


    

}
int main(){
    int n;
    cin >>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int count = primecount(a,n,0,0,n-1);
    cout << count << endl;

}