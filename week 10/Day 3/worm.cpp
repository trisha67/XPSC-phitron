#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> piles(n);
    vector<int> cumulative_sums(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> piles[i];
        if (i == 0) {
            cumulative_sums[i] = piles[i];
        } else {
            cumulative_sums[i] = cumulative_sums[i - 1] + piles[i];
        }
    }
    
    int m;
    cin >> m;
    vector<int> juicy_worms(m);
    
    for (int i = 0; i < m; ++i) {
        cin >> juicy_worms[i];
    }
    
    for (int i = 0; i < m; ++i) {
        int worm = juicy_worms[i];
        int left = 0, right = n - 1;
        while (left < right) {
            int mid = (left + right) / 2;
            if (worm <= cumulative_sums[mid]) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        cout << left + 1 << endl;
    }
    
    return 0;
}