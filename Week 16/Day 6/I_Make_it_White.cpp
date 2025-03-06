#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        long long first = -1, lst = -1;
        for (long long i = 0; i < n; ++i) {
            if (s[i] == 'B') {
                if (first == -1) {
                    first = i;
                }
                lst = i;
            }
        }
        cout << (lst - first + 1) << '\n';
    }
    return 0;
}