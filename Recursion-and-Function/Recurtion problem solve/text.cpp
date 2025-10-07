#include <bits/stdc++.h>
using namespace std;
const long long MOD = 676767677;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n; i++) {
        if(a[i] < 1 || a[i] > n) {
            cout << 0 << "\n";
            return;
        }
    }

    long long ans = 1;
    vector<int> left(n), right(n);

    for(int i = 0; i < n; i++) left[i] = i + 1;
    for(int i = n-1; i >= 0; i--) right[i] = n - i;

    for(int i = 0; i < n; i++) {
        if(a[i] > left[i] + right[i] - 1) {
            cout << 0 << "\n";
            return;
        }
    }

    for(int i = 0; i < n; i++) {
        if(a[i] != n && a[i] != 1) ans = (ans * 2) % MOD;
    }

    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}


