#include <iostream>
using namespace std;
int main() {
    int rows;

    cout << "Enter the number of rows in Pyramid Star Pattern: ";
    cin >> rows;

    int spaces = rows - 1;
    int stars = 1;
    cout<<"Pattern: "<<endl;
    for (int i = 0; i < rows; i++) {
        // Print spaces
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        // Print stars
        for (int k = 0; k < stars; k++) {
            cout << "* ";
        }

        cout << endl;
        
        spaces--;
        stars++;
    }

    return 0;
}







