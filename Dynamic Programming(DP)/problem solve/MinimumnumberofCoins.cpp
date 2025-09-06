
//      problem link---->>>> https://www.geeksforgeeks.org/problems/-minimum-number-of-coins4426/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article


#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n;
    cin >> n;

    vector<int> coins = {1, 2, 5, 10}; 
    vector<int> dp(n + 1, n + 1);      
    dp[0] = 0;                        

    for(int i = 1; i <= n; i++) {
        for(int c : coins) {
            if(i >= c) {
                dp[i] = min(dp[i], dp[i - c] + 1);
            }
        }
    }

    cout << dp[n]; 
}

signed main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int tc, tt = 1;
    cin >> tt;

    for(tc = 1; tc <= tt; tc++)
    {
        solve(tc);
        cout << "\n";
    }

    return 0;
}
