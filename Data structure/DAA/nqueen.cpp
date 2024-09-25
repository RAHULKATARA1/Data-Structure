#include <iostream>
#include <cmath>
using namespace std;

int x[20];  // Array to store the column positions of queens in each row

// Function to check if it's safe to place a queen at row k, column i
bool place(int k, int i) {
    for (int j = 1; j <= k - 1; j++) {
        // Check if another queen is in the same column or diagonal
        if (x[j] == i || abs(x[j] - i) == abs(j - k)) {
            return false;
        }
    }
    return true;
}

// Function to solve the N-Queens problem using backtracking
void nqueen(int k, int n) {
    for (int i = 1; i <= n; i++) {
        if (place(k, i)) {
            x[k] = i;  // Place queen at row k, column i
            if (k == n) {  // If all queens are placed, print the solution
                for (int r = 1; r <= n; r++) {
                    cout << x[r] << "   ";  // Print the column positions of queens
                }
                cout << endl;
            } else {
                nqueen(k + 1, n);  // Recur to place the next queen
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of queens: ";
    cin >> n;

    if (n == 1) {
        // For n=1, only one solution exists: placing the single queen
        cout << "1\n";
    } else if (n == 2 || n == 3) {
        // There are no valid solutions for n=2 or n=3
        cout << "No solution exists for " << n << "-Queens problem.\n";
    } else {
        // For n>=4, find and print all solutions
        cout << "Solutions for " << n << "-Queens problem:\n";
        nqueen(1, n);  // Start solving from the first row
    }

    return 0;
}
