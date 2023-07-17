#include <iostream>
#include <string>
using namespace std;
int findLongestWordLength(const string& sentence) {
    int maxLength = 0;
    int length = 0;

    for (char c : sentence) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (length > maxLength) {
                maxLength = length;
            }
            length = 0;
        } else {
            length++;
        }
    }

    // Check if the last word is the longest
    if (length > maxLength) {
        maxLength = length;
    }

    return maxLength;
}

int main() {
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int longestWordLength = findLongestWordLength(sentence);

    cout << "Length of the longest word: " << longestWordLength << endl;

    return 0;
}
