#include <bits/stdc++.h>
using namespace std;

int lower_bound(const vector<int>& nums, int target)
{
    int start = 0;
    int end = nums.size()-1;
    int mid = 0;
    while(start<end)
    {
        mid = start  + (end-start)/2;
        if(nums[mid]<=target)    start = mid+1;
        else   end = mid;
    }
    return start;
}

void solve()
{
    //code 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while(tc--) {
        solve();
    }

    return 0;
}
