#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    char operand;

    cout << "Enter the first number: "<<endl;
    cin >> num1;

    cout << "Enter the second number: "<<endl;
    cin >> num2;

    cout << "Enter the operand (+, -, *, /): "<<endl;
    cin >> operand;

    double result;

    switch (operand) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero!" << endl;
                return 1;
            }
            break;
        default:
            cout << "Error: Invalid operand!" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}
