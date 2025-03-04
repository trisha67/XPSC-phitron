#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        long long x = 0, ans = 0;
        for(long long p = 1; p < n; p++) {
            cin >> x;
            if (x) {
                ans += x;
            } 
            else if (ans > 0) {
                ans++;
            }
            
        }
        cin >> x;
        cout << ans << endl;
    }
    return 0;
 }