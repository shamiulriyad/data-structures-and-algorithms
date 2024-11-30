#include <iostream>
#include <algorithm>  // For std::gcd

using namespace std;

int LCM(int a, int b) {
    return (a * b) / __gcd(a, b);
}

int main() {
    int a, b;
    cin >> a >> b;
    int ans = LCM(a, b);
    cout << ans << endl;
}
