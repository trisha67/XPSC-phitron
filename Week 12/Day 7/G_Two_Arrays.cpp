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
        vector<int> a(n);
        vector<int> b(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        bool possible = true;
        for (int i = 0; i < n; i++) {
            if (b[i] < a[i] || b[i] > a[i] + 1) {
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