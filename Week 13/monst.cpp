#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        long long minimum = 0;
        for (int i = 0; i < n; i++) {
            long long HP = a[i] + x * (n - 1 - i);
            minimum = max(minimum, HP);
        }

        cout << minimum << endl;;
    }
    return 0;
}