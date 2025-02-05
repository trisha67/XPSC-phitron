#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;  
    while (t--) {
        int n,x;
        cin >> n >> x ;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int maximum = 1;
        int streak = 1;

        for (int i = 1; i < n; i++) {
            if (a[i] >= a[i - 1]) {
                streak++;
            } 
            else {
                maximum= max(maximum, streak);
                streak = 1;
            }
        }
        maximum = max(maximum, streak);
        
        for (int i = 0; i < n; i++) {
            vector<int>up = a;
            up[i] *= x;
            
            int current = 1;
            int temp = 1;
            for (int j = 1; j < n; j++) {
                if (up[j] >= up[j - 1]) {
                    temp++;
                } else {
                    current = max(current, temp);
                    temp = 1;
                }
            }
            current = max(current, temp);
            
            maximum = max(maximum, current);
        }
        
        cout << maximum << endl;
    }
    return 0;
}