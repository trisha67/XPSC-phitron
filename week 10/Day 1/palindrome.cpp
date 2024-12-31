#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string makePalindrome(const string &s) {
    vector<int> freq(26, 0);

    // Count the frequency of each character
    for (char c : s) {
        freq[c - 'A']++;
    }

    int odd_count = 0;
    char odd_char = '\0';

    // Identify characters with odd frequencies
    for (int i = 0; i < 26; ++i) {
        if (freq[i] % 2 != 0) {
            odd_count++;
            odd_char = 'A' + i;
        }
    }

    // If more than one character has an odd frequency, no palindrome is possible
    if (odd_count > 1) {
        return "NO SOLUTION";
    }

    // Construct the first half of the palindrome
    string first_half = "";
    for (int i = 0; i < 26; ++i) {
        first_half += string(freq[i] / 2, 'A' + i);
    }

    // Sort the first half to ensure lexicographical order
    sort(first_half.begin(), first_half.end());

    // Construct the full palindrome
    string result = first_half;
    if (odd_count == 1) {
        result += string(freq[odd_char - 'A'], odd_char);  // Add the odd character in the middle
    }
    string second_half = first_half;
    reverse(second_half.begin(), second_half.end());
    result += second_half;

    return result;
}

int main() {
    string s;
    cin >> s;
    cout << makePalindrome(s) << endl;
    return 0;
}
