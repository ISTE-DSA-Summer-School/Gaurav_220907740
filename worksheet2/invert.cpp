#include <iostream>
using namespace std;
void reverseString(char str[]) {
    int length = 0;

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }

    int fs = 0;
    int ls = length - 1;

    // Reverse the string
    while (fs < ls) {
        // Swap characters at fs and ls indices
        char temp = str[fs];
        str[fs] = str[ls];
        str[ls] = temp;

        // Move fs and ls indices towards the center
        fs++;
        ls--;
    }
}

int main() {
    const int MAX_SIZE = 100;
    char str[MAX_SIZE];

    cout << "Enter a string: ";
    cin.getline(str, MAX_SIZE);

    reverseString(str);

    cout << "Reversed string: " << str << endl;

    return 0;
}
