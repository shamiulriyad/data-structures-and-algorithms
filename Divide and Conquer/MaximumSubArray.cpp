#include <bits/stdc++.h>
using namespace std;

// Function to find max crossing subarray sum
int maxCrossingSum(vector<int>& arr, int left, int mid, int right) {
    int leftSum = INT_MIN;
    int sum = 0;

    for (int i = mid; i >= left; i--) {
        sum += arr[i];
        leftSum = max(leftSum, sum);
    }

    int rightSum = INT_MIN;
    sum = 0;

    for (int i = mid + 1; i <= right; i++) {
        sum += arr[i];
        rightSum = max(rightSum, sum);
    }

    return leftSum + rightSum;
}

// Divide and Conquer function
int maxSubArraySum(vector<int>& arr, int left, int right) {
    if (left == right) return arr[left]; // base case

    int mid = (left + right) / 2;

    int leftMax = maxSubArraySum(arr, left, mid);
    int rightMax = maxSubArraySum(arr, mid + 1, right);
    int crossMax = maxCrossingSum(arr, mid, left, right);

    return max({leftMax, rightMax, crossMax});
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = arr.size();

    int result = maxSubArraySum(arr, 0, n - 1);

    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
}
