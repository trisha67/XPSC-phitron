#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        if (n >= m && (n - m) % 2 == 0) {
            cout << "Yes" << endl;
        } 
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}