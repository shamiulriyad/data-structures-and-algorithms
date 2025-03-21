#include <bits/stdc++.h>
using namespace std;

vector<int> countsort(vector<int>& n) {
    int a = n.size();
    int max_val = *max_element(n.begin(), n.end());

    vector<int> countarray(max_val + 1, 0);
    
    // Step 1: Frequency count
    for (int i = 0; i < a; i++) {
        countarray[n[i]]++;
    }

    // Step 2: Prefix sum
    for (int i = 1; i <= max_val; i++) {
        countarray[i] += countarray[i - 1];
    }

    // Step 3: Output array
    vector<int> output(a);
    for (int i = a - 1; i >= 0; i--) {
        output[--countarray[n[i]]] = n[i];
    }

    return output;
}

void solve(int tc) {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> output = countsort(arr);

    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int tc, tt = 1;
    cin >> tt;

    for (tc = 1; tc <= tt; tc++) {
        solve(tc);
        cout << '\n';
    }

    return 0;
}
