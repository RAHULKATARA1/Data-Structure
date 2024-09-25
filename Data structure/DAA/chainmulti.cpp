#include <iostream>
#include <vector>
#include <climits>  // For INT_MAX
using namespace std;

// Function to print the optimal parenthesization
void printOptimalParens(const vector<vector<int> >& s, int i, int j) {
    if (i == j) {
        cout << "A" << i;  // Print matrix Ai
    } else {
        cout << "(";
        printOptimalParens(s, i, s[i][j]);  // Print the left side
        printOptimalParens(s, s[i][j] + 1, j);  // Print the right side
        cout << ")";
    }
}

// Function to find the minimum number of multiplications needed
int matrixChainMultiplication(const vector<int>& p, int n) {
    // Create a 2D table to store the minimum number of multiplications
    vector<vector<int> > m(n, vector<int>(n, 0));
    vector<vector<int> > s(n, vector<int>(n, 0));  // Table to store split points

    // m[i][i] = 0 since no multiplications are needed when multiplying one matrix
    for (int length = 2; length < n; length++) {  // length is the chain length
        for (int i = 1; i < n - length + 1; i++) {
            int j = i + length - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k < j; k++) {
                // q is the number of scalar multiplications for this split
                int q = m[i][k] + m[k+1][j] + p[i-1] * p[k] * p[j];
                if (q < m[i][j]) {
                    m[i][j] = q;
                    s[i][j] = k;  // Store the split point
                }
            }
        }
    }

    // Print the optimal parenthesization
    cout << "Optimal parenthesization: ";
    printOptimalParens(s, 1, n - 1);
    cout << endl;

    // The result is in m[1][n-1] which gives the minimum number of multiplications
    return m[1][n-1];
}

int main() {
    int n;
    cout << "Enter the number of matrices: ";
    cin >> n;
    
    // Matrix dimensions: size of the p array will be n+1 (p0, p1, ..., pn)
    vector<int> p(n+1);
    cout << "Enter the dimensions of the matrices:\n";
    for (int i = 0; i <= n; i++) {
        cin >> p[i];
    }

    // Call the matrixChainMultiplication function
    int minMultiplications = matrixChainMultiplication(p, n+1);
    
    cout << "Minimum number of multiplications is: " << minMultiplications << endl;
    return 0;
}
