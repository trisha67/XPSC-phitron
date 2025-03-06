#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        x = max(1, min(x,26*3));
        int first = max(1,x-52);
        int second = max(1,x-first-26);
        int third = max(1,x-first-second);
        char ch1 = 'a'+(first-1);
        char ch2 = 'a'+(second-1);
        char ch3 = 'a'+(third-1);
        cout << ch1 << ch2 << ch3 << '\n';
    }
    return 0;
}