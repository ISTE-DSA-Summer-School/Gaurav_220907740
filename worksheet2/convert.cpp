#include <iostream>
#include <string>
using namespace std;
string convertToUppercase(const string& str) {
    string uppercaseStr = str;

    for (char& c : uppercaseStr) {
        if (c >= 'a' && c <= 'z') {
            c = c - 'a' + 'A';
        }
    }

    return uppercaseStr;
}

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    string uppercaseString = convertToUppercase(input);

    cout << "Uppercase string: " << uppercaseString << endl;

    return 0;
}
