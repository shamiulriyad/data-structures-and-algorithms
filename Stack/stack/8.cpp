#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[100];
    int ans[100] = {0};
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    stack<int> st;
    
    for(int i=0;i<n;i++){
        while(!st.empty() && a[i] >a[st.top()]){
            int c= st.top();
            st.pop();
            ans[c] =i-c;
        }
        st.push(i);
    }
    for(int i=0;i<n;i++){
        if(i!=0){
            cout << " ";
        }
        cout << ans[i];
    }
    cout << "\n";
    return 0;
}