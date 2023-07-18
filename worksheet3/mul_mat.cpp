#include <iostream>
using namespace std;
void multiplyMatrices(int* mat1, int* mat2, int* result, int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            *(result + i * cols2 + j) = 0;
            for (int k = 0; k < cols1; k++) {
                *(result + i * cols2 + j) += *(mat1 + i * cols1 + k) * *(mat2 + k * cols2 + j);
            }
        }
    }
}

void printMatrix(int* mat, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << *(mat + i * cols + j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows1, cols1, rows2, cols2;

    cout << "Enter the number of rows and columns for the first matrix: "<<endl;
    cin >> rows1 >> cols1;

    cout << "Enter the number of rows and columns for the second matrix: "<<endl;
    cin >> rows2 >> cols2;

    if (cols1 != rows2) {
        cout << "Matrix multiplication is not possible!" << endl;
        return 0;
    }

    int mat1[rows1][cols1];
    int mat2[rows2][cols2];
    int result[rows1][cols2];

    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> mat2[i][j];
        }
    }

    multiplyMatrices(&mat1[0][0], &mat2[0][0], &result[0][0], rows1, cols1, cols2);

    cout << "Resultant matrix:" << endl;
    printMatrix(&result[0][0], rows1, cols2);

    return 0;
}
