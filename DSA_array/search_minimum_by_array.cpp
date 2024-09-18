#include <iostream>
using namespace std;

int main() {
    int my_array[] = {1, 2, 3, 4, 5, 6, 7};
    int array_size = sizeof(my_array) / sizeof(my_array[0]);
    int minval = my_array[0];
    for(int i = 1; i < array_size; i++) {
        if(my_array[i] < minval) {
            minval = my_array[i];
        }
    }
    cout << "The minimum value in the array is: " << minval << endl;

    return 0;
}
