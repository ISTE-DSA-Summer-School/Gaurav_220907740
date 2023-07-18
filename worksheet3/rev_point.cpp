#include <iostream>
using namespace std;
void reverseDigits(int* num) {
    int reversed = 0;
    int temp = *num;

    while (temp != 0) {
        int digit = temp % 10;
        reversed = (reversed * 10) + digit;
        temp /= 10;
    }

    *num = reversed;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    reverseDigits(&number);

    cout << "Reversed number: " << number << endl;

    return 0;
}
