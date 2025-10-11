#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> PII; // weight, price

bool cmp(PII A, PII B){
    // Sort by price/weight ratio descending
    return 1.0 * A.second / A.first > 1.0 * B.second / B.first;
}

int main() {
    int n, W;
    cin >> n;
    vector<PII> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second; // weight, price
    }
    cin >> W; // max capacity

    sort(v.begin(), v.end(), cmp);

    double ans = 0.0;

    for(int i = 0; i < n && W > 0; i++){
        int take = min(W, v[i].first); // weight to take
        ans += take * (1.0 * v[i].second / v[i].first); // add value proportionally
        W -= take;
    }

    cout << fixed << setprecision(6) << ans << endl;
    return 0;
}

/*

7
10 2
5 3
15 5
7 7
6 1
18 4
3 1
15



*/
