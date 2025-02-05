#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
            string result;
        while (x > 0 || y > 0) {
        if (y > 0) {
            result = '2' + result + '2';
            y -= 2;
        }
        if (x > 0) {
            result = '1' + result + '1';
            x -= 2;
        }
    }
    cout << result << endl;
    }
    return 0;
}