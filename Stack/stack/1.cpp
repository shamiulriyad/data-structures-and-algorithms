#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    stack<char>a;
    for(int i=0;i<n;i++){
        char c;
        cin >> c;
        if(c=='U'){
            if(!a.empty()){
                a.pop();
            }
        }
        else{
            a.push(c);
        }

    }
    string ans="";
    while(!a.empty()){
        ans=a.top()+ans;
        a.pop();
    }
    if(ans==""){
        cout << "(empty)" << endl;
    }
    else{
       
        cout << ans << endl;
    }

}