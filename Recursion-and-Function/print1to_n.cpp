#include <bits/stdc++.h>
using namespace std;
void printkorbo(int n) {
    if (n == 0) return;       
    printkorbo(n - 1);        
    cout << n << " ";         
}
int main() {
    int n;
    cin >> n;
    printkorbo(n);
    cout << endl;
}
