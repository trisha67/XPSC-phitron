#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int sum = 0;

        for (int& i : v) {
            cin >> i;
            sum += i;
        }

        if (sum % 3 == 0) {
            cout << 0 << endl;
        } else if (sum % 3 == 2) {
            cout << 1 << endl;
        } else {
            bool found = false;
            for (int i = 0; i < n; i++) {
                if ((sum - v[i]) % 3 == 0) {
                    found = true;
                    cout << 1 << endl;
                    break;
                }
            }
            if (!found) {
                cout << 2 << endl;
            }
        }
    }
    return 0;
}