#include <iostream>
using namespace std;
int main() {
    int rows;

    cout << "Enter the number of rows in the inverted mirrored right triangle star pattern: ";
    cin >> rows;
    cout <<"Pattern is: "<<endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        for (int k = i; k < rows; k++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}