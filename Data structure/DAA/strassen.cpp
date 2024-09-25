#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matrix;

// Matrix addition
Matrix add(const Matrix &A, const Matrix &B, int size) {
    Matrix result(size, vector<int>(size));
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            result[i][j] = A[i][j] + B[i][j];
    return result;
}

// Matrix subtraction
Matrix subtract(const Matrix &A, const Matrix &B, int size) {
    Matrix result(size, vector<int>(size));
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            result[i][j] = A[i][j] - B[i][j];
    return result;
}

// Strassen's matrix multiplication
Matrix strassen(const Matrix &A, const Matrix &B, int size) {
    if (size == 1) return {{A[0][0] * B[0][0]}};
    
    int newSize = size / 2;
    Matrix A11(newSize, vector<int>(newSize)), A12(newSize, vector<int>(newSize)),
           A21(newSize, vector<int>(newSize)), A22(newSize, vector<int>(newSize)),
           B11(newSize, vector<int>(newSize)), B12(newSize, vector<int>(newSize)),
           B21(newSize, vector<int>(newSize)), B22(newSize, vector<int>(newSize));

    for (int i = 0; i < newSize; i++)
        for (int j = 0; j < newSize; j++) {
            A11[i][j] = A[i][j];
            A12[i][j] = A[i][j + newSize];
            A21[i][j] = A[i + newSize][j];
            A22[i][j] = A[i + newSize][j + newSize];
            B11[i][j] = B[i][j];
            B12[i][j] = B[i][j + newSize];
            B21[i][j] = B[i + newSize][j];
            B22[i][j] = B[i + newSize][j + newSize];
        }

    Matrix M1 = strassen(add(A11, A22, newSize), add(B11, B22, newSize), newSize);
    Matrix M2 = strassen(add(A21, A22, newSize), B11, newSize);
    Matrix M3 = strassen(A11, subtract(B12, B22, newSize), newSize);
    Matrix M4 = strassen(A22, subtract(B21, B11, newSize), newSize);
    Matrix M5 = strassen(add(A11, A12, newSize), B22, newSize);
    Matrix M6 = strassen(subtract(A21, A11, newSize), add(B11, B12, newSize), newSize);
    Matrix M7 = strassen(subtract(A12, A22, newSize), add(B21, B22, newSize), newSize);

    Matrix C(size, vector<int>(size));
    for (int i = 0; i < newSize; i++)
        for (int j = 0; j < newSize; j++) {
            C[i][j] = M1[i][j] + M4[i][j] - M5[i][j] + M7[i][j];
            C[i][j + newSize] = M3[i][j] + M5[i][j];
            C[i + newSize][j] = M2[i][j] + M4[i][j];
            C[i + newSize][j + newSize] = M1[i][j] - M2[i][j] + M3[i][j] + M6[i][j];
        }
    
    return C;
}

// Function to display the matrix
void printMatrix(const Matrix &matrix, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter matrix size (must be a power of 2): ";
    cin >> n;

    Matrix A(n, vector<int>(n)), B(n, vector<int>(n));

    cout << "Enter matrix A:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    cout << "Enter matrix B:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> B[i][j];

    Matrix C = strassen(A, B, n);

    cout << "Resultant matrix:\n";
    printMatrix(C, n);

    return 0;
}
