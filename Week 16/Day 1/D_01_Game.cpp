#include <iostream>
#include <string>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int count1 = 0, count2 = 0;
        for (char c : s) {
            if (c == '0') {
                count1++;
            } else {
                count2++;
            }
        }

        if (min(count1, count2) % 2 == 1) {
            cout << "DA" << endl; 
        } else {
            cout << "NET" << endl; 
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}