#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    cin.ignore();
    stack<string> st;
    string b[100];
    for(int i=0;i<n;i++){
        getline(cin, b[i]);
        st.push(b[i]);
    }
    cout << "Original: ";
    for(int i=0;i<n;i++){
        if(i!=0) cout << " ";
        cout << b[i];
    }
    cout << "\n";
    cout << "Reversed: ";
    bool first = true;
    while(!st.empty()){
        if(!first) cout << " ";
        cout << st.top();
        st.pop();
        first = false;
    }
    cout << "\n";
    return 0;
}