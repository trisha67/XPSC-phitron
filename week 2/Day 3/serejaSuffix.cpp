#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    vector<int> distinct_count(n + 1, 0);
    unordered_set<int> seen;
 
    for (int i = n; i >= 1; i--) {
        if (seen.find(a[i]) == seen.end()) {
            seen.insert(a[i]);
        }
        distinct_count[i] = seen.size();
    }
    
    for (int i = 0; i < m; i++) {
        int l;
        cin >> l;
        cout << distinct_count[l] << '\n';
    }
    
    return 0;
}
