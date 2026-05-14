#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    stack<char>st;
    for(char c:s){
        if(c=='('||c =='[' ||c =='{')
        {
            st.push(c);
        }
        else if(c == ')'||c ==']'|| c == '}')
        {
            if(st.empty()){
                return false;
            }
            char top=st.top();
            st.pop();
            if((c == ')'&&top!='(')||(c ==']' &&top!='[')||(c == '}'&& top != '{'))
            {
                return false;
            }
        }
    }
    return st.empty();
}
int main(){
    string s;
    while(getline(cin,s))
    {
    if(check(s)){

    cout << "Balanced" << endl;
    }
    else{
            cout << "Not Balanced" << endl;
        }
    }
    return 0;
}