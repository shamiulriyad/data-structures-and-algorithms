#include<bits/stdc++.h>
using namespace std;

int main() {
    string a;
    getline(cin, a);
    stack<string>b;
    stack<int>d;
    string cur= "";
    int num = 0;
    for(int i=0;i<a.size();i++){
        char c = a[i];
        if(c >= '0' && c <= '9'){
            num = num * 10 + (c - '0');
        } else if(c == '[') {
            b.push(cur);
            d.push(num);
            cur = "";
            num = 0;
        } 
        else if(c==']'){
            int p=d.top(); d.pop();
            string q=b.top(); b.pop();
            string t= "";
            for(int j=0;j<p;j++){
                t += cur;
            }
            cur = q + t;
        }
        else{
            cur += c;
        }
    }
    cout << cur << "\n";
    return 0;
}