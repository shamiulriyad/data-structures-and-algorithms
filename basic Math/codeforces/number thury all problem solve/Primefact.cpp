#include <bits/stdc++.h>
using namespace std;


int factprime(int n) {
    int ans = 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            ans++;
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    if (n > 1) {
        ans++;
    }
    return ans;
}

int main() {`
    int n;
    while (cin >> n && n != 0) {
        cout << n << " : " << factprime(n) << endl;
    }
    return 0;
}
