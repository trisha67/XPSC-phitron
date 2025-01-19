#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t; 
    vector<int> fibo;

    while (t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        int max_fibo = 0;

        for (int a3 = -200; a3 <= 200; a3++) {
            int count = 0;

            if (a3 == a1 + a2) count++;
            if (a4 == a2 + a3) count++;
            if (a5 == a3 + a4) count++;

            max_fibo = max(max_fibo, count);
        }

        fibo.push_back(max_fibo);
    }

    for (int result : fibo) {
        cout << result << endl;
    }

    return 0;
}