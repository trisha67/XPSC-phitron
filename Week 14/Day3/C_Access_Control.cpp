#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        string s;
        cin >> s;

        int swipes = 0;
        bool flag = true;

        for (char c : s) {
            if (c == '0') {
                swipes--;
                if (swipes < 0) {
                    flag = false;
                    break;
                }
            } else if (c == '1') {
                swipes = x;
            }
        }

        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}