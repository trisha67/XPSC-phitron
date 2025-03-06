#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> str(n);
        for (int i = 0; i < n; ++i) {
            cin >> str[i];
        }
        bool triangle = false;
        for (int i = 0; i < n; ++i) {
            int count = 0;
            for (int j = 0; j < str[i].size(); ++j) {
                if (str[i][j] == '1') {
                    count++;
                }
            }
            if (count == 1) {
                triangle = true;
                break;
            }
        }
        if (triangle) {
            cout << "TRIANGLE" << '\n';
        } 
        else {
            cout << "SQUARE" << '\n';
        }
    }
    return 0;
}