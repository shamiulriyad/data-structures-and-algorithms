#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;

    cin >>n;
    int prev=0;
    int prev2=1;
    int curr;
    for(int i=0;i<n;i++){
        curr=prev+prev2;
        prev2=prev;
        prev=curr;

    }
    cout << prev << endl;
}

