#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int year = n - k + 1;
        long long leave = (year + n) * (n - year + 1) / 2;
        if (leave % 2 == 1) {
            cout << "NO" << endl;
        } 
        else {
            cout << "YES" << endl;
        }
    }

    return 0;
}