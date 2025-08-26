#include <bits/stdc++.h>
using namespace std;

bool check_pal(string &s, int l, int r) {
    while(l < r && s[l] == ' ') l++;
    while(l < r && s[r] == ' ') r--;

    if(l >= r) return true;

    if(tolower(s[l]) != tolower(s[r])) return false;

    return check_pal(s, l+1, r-1);
}

void solve(int tc) {
    string s;
    getline(cin, s);

    if(check_pal(s, 0, s.size()-1)) {
        cout << "True";
    } else {
        cout << "False";
    }
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt = 1;
    cin >> tt;
    cin.ignore();

    for(tc = 1; tc <= tt; tc++) {
        solve(tc);
        cout << endl;
    }

    return 0;
}
