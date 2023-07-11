#include <iostream>
#include <string>
using namespace std;
int main() {
    string str = "Hello, World!";
    
    // 1. Length of the string
    int length = str.length();
    cout << "Length of the string: " << length << endl;
    
    // 2. Substring
    string substring = str.substr(7, 5); // Starting from index 7, 5 characters long
    cout << "Substring: " << substring << endl;
    
    // 3. Concatenation
    string name = "Gaurav";
    string greeting = "Hello, " + name + "!";
    cout << "Greeting: " << greeting << endl;
    
    // 4. Find
    int index = str.find("World");
    if (index != string::npos) {
        cout << "Found at index: " << index << endl;
    } else {
        cout << "Not found" << endl;
    }
    
    // 5. Replace
    string replacedStr = str;
    replacedStr.replace(0, 4, "Jell-");
    cout << "Replaced string: " << replacedStr << endl;
    
    return 0;
}
