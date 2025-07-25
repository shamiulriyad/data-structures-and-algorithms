#include <bits/stdc++.h>
using namespace std;
vector<int> manacher_odd(string s) {
    int n = s.size();
    s = "$" + s + "^";
    vector<int> p(n + 2);
    int l = 0, r = 1;
    for(int i = 1; i <= n; i++) {
        p[i] = min(r - i, p[l + (r - i)]);
        while(s[i - p[i]] == s[i + p[i]]) {
            p[i]++;
        }
        if(i + p[i] > r) {
            l = i - p[i];
            r = i + p[i];
        }
    }
    return vector<int>(begin(p) + 1, end(p) - 1);
}

vector<int> manacher(string s) {
    string t;
    for(char c : s) {
        t += "#" + string(1, c);
    }
    auto res = manacher_odd(t + "#");
    return vector<int>(begin(res)+1, end(res)-1);
}

int periodic_stri(const string& s){
    int n = s.size();
    vector<int> pi(n);
    for(int i = 1; i < n; i++) {
        int j = pi[i - 1];
        while(j > 0 && s[i] != s[j]) {
            j = pi[j - 1];
        }
        if(s[i] == s[j]) j++;
        pi[i] = j;
    }
    int period = n - pi[n - 1];
    return (n % period == 0) ? period : n;
}

int main() {
    int t;
    string temp;
    getline(cin, temp); 
    t = stoi(temp);     

    while(t--) {
        string a;
        getline(cin, a);        
        auto p = manacher(a); 
        cout << periodic_stri(a) << "\n";
        if(t) cout << "\n";     
    }

    return 0;
}
