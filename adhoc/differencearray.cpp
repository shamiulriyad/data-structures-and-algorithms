#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,start,end,plusvalue,  query;;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> query;
    while(query--){

    
    cin >> start >> end >> plusvalue;
    int ans=0;
    for(int i=start;i<=end;i++){
        a[i]+=plusvalue;


        
    }
}
    for(int i=0;i<n;i++){
        cout << a[i] << " " ;
    }
    
}

/*

7
2 3 4 5 6 7 8 
3
0 3 2
1 5 1
4 6 3

*/