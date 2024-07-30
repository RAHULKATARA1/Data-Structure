#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to check if two strings are anagrams
bool areAnagrams(const string& str1, const string& str2) {
    // If string lengths are not equal, they cannot be anagrams
    if (str1.length() != str2.length()) {
        return false;
    }

    // Sort both strings and compare
    string sortedStr1 = str1;
    string sortedStr2 = str2;
    sort(sortedStr1.begin(), sortedStr1.end());
    sort(sortedStr2.begin(), sortedStr2.end());

    return sortedStr1 == sortedStr2;
}

int main() {
    string str1, str2;

    // Input two strings from user
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    // Check if strings are anagrams
    if (areAnagrams(str1, str2)) {
        cout << "Strings are anagrams." << endl;
    } else {
        cout << "Strings are not anagrams." << endl;
    }

    return 0;
}