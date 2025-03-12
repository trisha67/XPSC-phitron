#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int x,y,k;
        cin >> x >> y >> k;
        int s = x+y;
        int d = abs(x-y);
        if(k > s || ((s % 2) != (k % 2))) {
            cout << -1 << '\n';
        } 
        else {
            cout << abs(k-d)/2 << '\n';
        }
    }
    return 0;
}