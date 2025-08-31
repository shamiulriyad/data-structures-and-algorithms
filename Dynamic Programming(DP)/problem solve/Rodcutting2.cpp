#include <bits/stdc++.h>
using namespace std;

int p[100];

int rodcuting(int p[], int length) {
    if (length == 0) return 0;

    int maxvalue = INT_MIN;
    for (int i = 0; i < length; i++) {
        int value = p[i] + rodcuting(p, length - i - 1);
        maxvalue = max(maxvalue, value);
    }
    return maxvalue;
}

int main() {
    int length;
    cin >> length;
    for (int i = 0; i < length; i++) {
        cin >> p[i]; 
    }
    cout << rodcuting(p, length) << endl;
}
