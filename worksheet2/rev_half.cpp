#include <iostream>
#include <string>
using namespace std;
string reverseFromHalf(const string& str) {
    int length = str.length();
    int mid = length/2;
    int j=0;
    string reversed = str;

    for (int i = 0; i <mid ; i++) {
        reversed[i] = str[mid-1-i];
    }
    for ( int i=length; i> mid; i--) {
        reversed[mid+j] = str[i];
        j++;
    }

    return reversed;
}

int main() {
    string input;

    cout << "Enter a string: ";
    cin >> input;

    string rev = reverseFromHalf(input);
    cout << "Reversed string: " << rev << endl;

    return 0;
}
