#include<bits/stdc++.h>
using namespace std;
int main() {
    string p;
    getline(cin, p);
    stack<int>st;
    string q= "";
    p += " ";
    for(int i=0;i<p.size();i++){
        if(p[i]==' '){
            if(q=="") continue;
            if(q=="+"||q=="-"||q=="*"||q=="/"){
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                if(q=="/"&&b==0){
                    cout << "Error: division by zero\n";
                    return 0;
                }
                if(q=="+") st.push(a + b);
                if(q=="-") st.push(a - b);
                if(q=="*") st.push(a * b);
                if(q=="/") st.push(a / b);
            }
            else{
                int num = 0;
                for(int j=0;j<q.size();j++){
                    num = num * 10 + (q[j] - '0');
                }
                st.push(num);
            }
            q= "";
        }
        else{
            q += p[i];
        }
    }
    cout << "Result: "<< st.top() << "\n";
    return 0;
}