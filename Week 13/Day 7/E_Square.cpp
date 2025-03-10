#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;
        if ((a1 == a2 && b1 + b2 == a1) || 
            (a1 == b2 && b1 + a2 == a1) || 
            (b1 == a2 && a1 + b2 == b1) || 
            (b1 == b2 && a1 + a2 == b1)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}