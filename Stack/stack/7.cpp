#include<bits/stdc++.h>
using namespace std;
int main() {
    string a;
    getline(cin,a);
    stack<string>st;
    string b= "";
    a+="/";
    for(int i=0;i<a.size();i++){
        if(a[i]=='/'){
            if(b=="" || b=="."){
                b = "";
                continue;
            }
            if(b==".."){
                if(!st.empty()) st.pop();
            }
            else{
                st.push(b);
            }
            b = "";
        }
        else{
            b += a[i];
        }
    }

    if(st.empty()){
        cout<<"/\n";
        return 0;
    }
    string result="";
    while(!st.empty()){
        result= "/" + st.top() + result;
        st.pop();
    }
    cout << result << "\n";
    return 0;
}