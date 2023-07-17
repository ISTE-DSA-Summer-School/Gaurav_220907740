#include <iostream>
#include <string>
using namespace std;
int countOccurrences(const string& sentence, const string& word) {
    int count = 0;
    string::size_type pos = 0;

    while ((pos = sentence.find(word, pos)) != string::npos) {
        count++;
        pos += word.length();
    }

    return count;
}

int main() {
    string sentence;
    string word;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Enter a word to count its occurrences: ";
    cin >> word;

    int occurrences = countOccurrences(sentence, word);

    cout << "Occurrences of the word \"" << word << "\": " << occurrences << endl;

    return 0;
}
