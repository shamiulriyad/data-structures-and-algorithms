#include <bits/stdc++.h>
using namespace std;

bool campire(pair<int,int> A, pair<int,int> B) {
    return (A.second < B.second);
}

int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), campire);

    int cnt = 1;  
    int endtime = v[0].second;

    cout << v[0].first << " " << v[0].second << endl; 
    for(int i = 1; i < n; i++) {
        if(v[i].first >= endtime) {
            cnt++;
            endtime = v[i].second;
            cout << v[i].first << " " << v[i].second << endl;
        }
    }

    cout << "Total activities selected: " << cnt << endl;
}
