#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x,a,b;
        cin >>n>>x>>a>>b;
        if(a>b)swap(a,b);
        int min_a=max(1,a-x);
        int max_b=min(n,b+x);
        int distance=(max_b-min_a);
        int max_dis = b-a+min(x,n-1);
        cout << min(distance,max_dis) << endl;

    }
}