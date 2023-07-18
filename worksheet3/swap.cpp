#include <iostream>
using namespace std;
void swap(int* A, int* B) {
    int temp = *A;
    *A = *B;
    *B = temp;
}
void swap(int& A, int& B) {
    int temp = A;
    A = B;
    B = temp;
}

int main() {
    int A, B, C;

    cout << "Enter two integers: "<<endl;
    cin >> A >> B;

    cout <<"Type 1 to swap using pointers and 2 to swap using references : " ;
    cin >> C;

    cout << "Before swap: A = " << A << ", B = " << B << endl;

    if(C==1)
    swap(&A, &B);
    else if(C==2)
    swap(A, B);
    else
    cout << "Invalid Input";

    cout << "After swap: A = " << A << ", B = " << B << endl;

    return 0;
}
