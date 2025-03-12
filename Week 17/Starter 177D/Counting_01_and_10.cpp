#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long m = n/2;
        long long sumA = m * (m+1) / 2; 
        long long sumA2 = m * (m+1) * (2 * m+1) / 6; 
        long long ans = n*sumA - sumA2 + (m+ 1);
        
        cout << ans << "\n";
    }
    return 0;
}