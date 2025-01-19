#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n; 
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        bool possible = true;

        for (int i = 0; i < n - 1; i++) {
            int r= min(a[i], a[i + 1]);
            a[i] -= r;
            a[i + 1] -= r;

            if (a[i] > a[i + 1]) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}