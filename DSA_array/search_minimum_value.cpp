// form user input

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int *array = new int[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; ++i) {
        cin >> array[i];
    }
    int minval = array[0];
    for(int i = 1; i < n; i++) {
        if(array[i] < minval) {
            minval = array[i];
        }
    }
    cout << "The minimum value in the array is: " << minval << endl;

    // Deallocate the dynamic array
    delete[] array;

    return 0;
}
