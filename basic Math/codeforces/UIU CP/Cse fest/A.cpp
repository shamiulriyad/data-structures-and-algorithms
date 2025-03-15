#include<bits/stdc++.h>
using namespace std;
int  main(){
    int  N, B;
    cin >> N >> B;
    int sum=0;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=B;j++){
            sum+=i*100+j;
        }
    }
    cout << sum ;

}