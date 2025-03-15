#include <iostream>
using namespace std;

void selectionSort(int a[], int n) {
    for (int i = 0; i <= n - 2; i++) {
        int minIndex = i;
        for (int j = i ; j <= n-1; j++) {  
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
       int temp = a[minIndex];
       a[minIndex] = a[i];
       a[i] = temp; 
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    selectionSort(a, n);

    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
 }
