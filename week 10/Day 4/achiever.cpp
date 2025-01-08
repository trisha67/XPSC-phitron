#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int max_score = a[0];
        cout << 1 << " ";
        for(int i = 1; i < n; i++) {
            if(a[i] > max_score) {
                cout << 1 << " ";
                max_score = a[i];
            } 
            else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}