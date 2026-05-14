#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    cin.ignore();
    stack<int> st;
    stack<int>a;
    for(int i=0;i<n;i++){
        string line;
        getline(cin, line);
        if(line.substr(0, 4)=="PUSH"){
            int x = stoi(line.substr(5));
            st.push(x);
            if(a.empty() ||x <= a.top()){
                a.push(x);
            }
            cout << "Pushed " << x << "\n";
        }
        else if(line == "POP"){
            if(st.empty()) {
                cout << "Stack is empty\n";
            }
            else{
                int top = st.top();
                st.pop();
                if(top == a.top()) a.pop();
                cout << "Popped: " << top << "\n";
            }
        }
        else if(line == "PEEK"){
            if(st.empty()) {
                cout << "Stack is empty\n";
            } else {
                cout << "Top: " << st.top() << "\n";
            }
        }
        else if(line == "GETMIN"){
            if(a.empty()) {
                cout << "Stack is empty\n";
            } else {
                cout << "Min: " << a.top() << "\n";
            }
        }
    }
    return 0;
}