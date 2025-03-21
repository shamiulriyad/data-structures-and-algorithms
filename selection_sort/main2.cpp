#include <iostream>
using namespace std;

void selectionsort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

void solve(int tc) {
    int n;
    cin >> n;
    int arr[10000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    selectionsort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc, tt = 1;
    cin >> tt;
    for (tc = 1; tc <= tt; tc++) {
        solve(tc);
        cout << endl;
    }
    return 0;
}
