#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    stack<int> st;
    int a[100];
    int b[100] = {0};
    int c[100];
    int count= 0;
    for(int i=0;i<n;i++){
        cin >>a[i];
        st.push(a[i]);
        bool e= false;
        for(int j=0;j<count;j++){
            if(c[j] == a[i]) {
                b[j]++;
                e = true;
                break;
            }
        }
        if(!e){
            c[count] = a[i];
            b[count] = 1;
            count++;
        }
    }
    cout << "Newest first: ";
    bool p = true;
    while(!st.empty()){
        if(!p) cout << " ";
        cout << st.top();
        st.pop();
        p = false;
    }
    cout << "\n";
    bool d= false;
    for(int i=0;i<count;i++){
        if(b[i] > 1) {
            if(!d) cout << "Suspected spam:\n";
            cout << c[i] << " (" << b[i] << " times)\n";
            d = true;
        }
    }
    if(!d) {
        cout << "No suspicious numbers\n";
    }
    return 0;
}