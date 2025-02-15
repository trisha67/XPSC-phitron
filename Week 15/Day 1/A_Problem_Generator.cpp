#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        
        vector<int> count(7, 0);
        for (char c : s) {
            if (c == 'A') {
                count[0]++;
            } else if (c == 'B') {
                count[1]++;
            } else if (c == 'C') {
                count[2]++;
            } else if (c == 'D') {
                count[3]++;
            } else if (c == 'E') {
                count[4]++;
            } else if (c == 'F') {
                count[5]++;
            } else if (c == 'G') {
                count[6]++;
            }
        }
        
        int ans = 0;
        for (int i = 0; i < 7; i++) {
            int min = m - count[i];
            if (min > 0) {
                ans += min;
            }
        }
        cout << ans << endl;
    }

    return 0;
}