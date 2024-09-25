#include <iostream>
#include <vector>
#include <set>
using namespace std;

// Function to find all LCS sequences
set<string> findalllcs(int i, int j, const string &x, const string &y, const vector<vector<int> > &dp) {
    // Base case
    if (i == 0 || j == 0) {
        set<string> empty_set;
        empty_set.insert("");  // Insert an empty string
        return empty_set;
       
    }

    // Move diagonally if characters match
    if (x[i - 1] == y[j - 1]) {
        set<string> lcs = findalllcs(i - 1, j - 1, x, y, dp);
        set<string> result;
        for (string s : lcs) {  // Make a copy of each string
            s += x[i - 1];      // Modify the copy
            result.insert(s);   // Insert the modified copy into the result set
        }
        return result;
    }

    // If characters don't match, follow the maximum value in the dp table
    set<string> result;
    if (dp[i - 1][j] >= dp[i][j - 1]) {
        result = findalllcs(i - 1, j, x, y, dp);
    }
    if (dp[i][j - 1] >= dp[i - 1][j]) {
        set<string> temp = findalllcs(i, j - 1, x, y, dp);
        result.insert(temp.begin(), temp.end());
    }

    return result;
}

// Function to set up DP table and find LCS
set<string> findlcs(const string &x, const string &y) {
    int m = x.length();
    int n = y.length();

    // Create dp table
    vector<vector<int> > dp(m + 1, vector<int>(n + 1, 0));

    // Fill the dp table
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (x[i - 1] == y[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    // Call the helper function to backtrack and find all LCS sequences
    return findalllcs(m, n, x, y, dp);
}

int main() {
    string x, y;
    cout << "Enter the first string: ";
    cin >> x;
    cout << "Enter the second string: ";
    cin >> y;

    set<string> lcs_seq = findlcs(x, y);
    cout << "Number of LCS sequences: " << lcs_seq.size() << endl;

    cout << "LCS sequences are: " << endl;
    for (const string &seq : lcs_seq) {
        cout << seq << endl;
    }

    return 0;
}
