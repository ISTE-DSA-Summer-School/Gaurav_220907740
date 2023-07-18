#include <iostream>
using namespace std;
void findFactorial(int* num, unsigned long long* factorial)
{
    *factorial=1;
    for(int i =1;i <= *num; i++)
    { 
        *factorial *= i;
    }
}



int main() {
    int number;
    unsigned long long factorial;

    cout << "Enter a number: ";
    cin >> number;

    findFactorial(&number, &factorial);

    cout << "Factorial of " << number << " is: " << factorial << endl;

    return 0;
}