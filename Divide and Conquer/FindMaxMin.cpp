#include <iostream>
using namespace std;
// Structure to store both maximum and minimum elements
struct Pair {
    int max;
    int min;
};
Pair maxMinDivideConquer(int arr[], int low, int high) {
    Pair result, left, right;
    int mid;
    // If only one element in the array
    if (low == high) {
        result.max = arr[low];
        result.min = arr[low];
        return result;
    }
    // If there are two elements in the array
    if (high == low + 1) {
        if (arr[low] < arr[high]) {
            result.min = arr[low];
            result.max = arr[high];
        } else {
            result.min = arr[high];
            result.max = arr[low];
        }
        return result;
    }
    // If there are more than two elements in the array
    mid = (low + high) / 2;
    left = maxMinDivideConquer(arr, low, mid);
    right = maxMinDivideConquer(arr, mid + 1, high);
    // Compare and get the maximum of both parts
    result.max = (left.max > right.max) ? left.max : right.max;
    // Compare and get the minimum of both parts
    result.min = (left.min < right.min) ? left.min : right.min;
    return result;
}
int main() {
    int arr[] = {6, 4, 26, 14, 33, 64, 46};
    int n = sizeof(arr) / sizeof(arr[0]);
    Pair result = maxMinDivideConquer(arr, 0, n - 1);
    cout << "Maximum element is: " << result.max << endl;
    cout << "Minimum element is: " << result.min << endl;
    return 0;
}