#include <iostream>
#include <string>
using namespace std;
string findMostFrequentCharacters(const string& str) {
    int charCount[256] = {0};
    int maxFrequency = 0;

    // Count the occurrence of each character
    for (char c : str) {
        charCount[c]++;
        if (charCount[c] > maxFrequency) {
            maxFrequency = charCount[c];
        }
    }

    // Collect characters with the maximum frequency
    string mostFrequentChars;
    for (int i = 0; i < 256; i++) {
        if (charCount[i] == maxFrequency) {
            mostFrequentChars += static_cast<char>(i);
        }
    }

    return mostFrequentChars;
}

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    string mostFrequent = findMostFrequentCharacters(input);

    cout << "Most frequent character(s): [ " << mostFrequent << " ]"<<endl;

    return 0;
}
