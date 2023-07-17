#include <iostream>
#include <string>
using namespace std;
bool areAnagrams(const string& str1, const string& str2) {
    // Check if the strings have the same length
    if (str1.length() != str2.length()) {
        return false;
    }

    // Count the occurrence of each character in str1
    int charCount[26] = {0};

    for (char c : str1) {
        if (isalpha(c)) {
            charCount[tolower(c) - 'a']++;
        }
    }
   //convert all to lowercase for checking
    for (char c : str2) {
        if (isalpha(c)) {
            charCount[tolower(c) - 'a']--;
        }
    }

    // Check if all counts are zero
    for (int count : charCount) {
        if (count != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string str1, str2;

    cout << "Enter the first string: ";
    cin >> str1;

    cout << "Enter the second string: ";
    cin >> str2;

    if (areAnagrams(str1, str2)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}
