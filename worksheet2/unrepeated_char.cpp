#include <iostream>
#include <string>
using namespace std;
char findFirstNonRepeatedCharacter(const string& str) {
    int charCount[256] = {0};

    // Count the occurrence of each character
    for (char c : str) {
        charCount[c]++;
    }

    // Find the first non-repeated character
    for (char c : str) {
        if (charCount[c] == 1) {
            return c;
        }
    }

    // Return '\0' if no non-repeated character found
    return '\0';
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    char first = findFirstNonRepeatedCharacter(str);

    if (first != '\0') {
        cout << "First non-repeated character: " << first << endl;
    } else {
        cout << "No non-repeated character found." << endl;
    }

    return 0;
}
