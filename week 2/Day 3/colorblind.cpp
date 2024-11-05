#include <bits/stdc++.h>
using namespace std;

string normalize(const string &row) {
    string normalized;
    for (char c : row) {
        if (c == 'G' || c == 'B') {
            normalized += 'X';
        } else {
            normalized += c;
        }
    }
    return normalized;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        string row1, row2;
        cin >> row1 >> row2;
        
        string normalizedRow1 = normalize(row1);
        string normalizedRow2 = normalize(row2);
        
        if (normalizedRow1 == normalizedRow2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}