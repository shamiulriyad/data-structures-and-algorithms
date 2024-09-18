#include <iostream>
using namespace std;

void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {  
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(a[i], a[minIndex]);
        }
    }
}

int main() {
    int a[] = {5, 64, 3, 5, 65, 76, 8, 77, 5};
    int n = sizeof(a) / sizeof(a[0]); 

    selectionSort(a, n);

    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
