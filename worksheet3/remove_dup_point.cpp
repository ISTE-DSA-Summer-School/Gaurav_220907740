#include <iostream>
using namespace std;
int removeDuplicates(int* arr, int size) {
    if (size == 0 || size == 1) {
        return size;
    }

    int* current = arr;
    int* next = arr + 1;
    int newSize = 1;

    while (next < arr + size) {
        if (*current != *next) {
            *(++current) = *next;
            newSize++;
        }
        next++;
    }

    return newSize;
}

int main() {
    int size;

    cout << "Enter the size of the sorted array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the sorted array: "<<endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int newSize = removeDuplicates(arr, size);

    cout << "New length of the array: " << newSize << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
