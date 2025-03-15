#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minSocksToGrab(int n, vector<int>& a, vector<int>& b) {
    vector<int> r(n);
    for (int i = 0; i < n; i++){
         r[i] = a[i] - b[i];
    }
    bool hasPair = false;
    int totalSocks = 0, maxSingleColor = 0;

    for (int i = 0; i < n; i++) {
        if (r[i] >= 2) hasPair = true;
        totalSocks += r[i];
        maxSingleColor = max(maxSingleColor, r[i]);
    }

    if (!hasPair) return -1; 

  
    return totalSocks - maxSingleColor + 1;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    cout << minSocksToGrab(n, a, b) << endl;
    return 0;
}
