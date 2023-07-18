#include <iostream>
using namespace std;
int findMaxSubarraySum(int* arr, int size) {
    int maxSum = arr[0];
    int currentSum = arr[0];

    for (int i = 1; i < size; i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int maxSum = findMaxSubarraySum(arr, size);

    cout << "Maximum sum of subarray: " << maxSum << endl;

    return 0;
}
