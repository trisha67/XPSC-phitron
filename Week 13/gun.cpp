#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

  int t;
 cin >> t;
    while (t--) {
        int n,d;
        cin >> n >> d;

        vector<int> a(n); 
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int count = 0;
        bool closeGun = true;

        for (int i = 0; i < n; ++i) {
            if (a[i] <= d) {
                if (!closeGun) {
                    count++;
                    closeGun = true;
                }
            } else {
                if (closeGun) {
                    count++;
                   closeGun = false;
                }
            }
        }

        cout <<count << '\n';
    }

    return 0;
}