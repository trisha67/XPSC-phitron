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
        int animals = n / 4;
        if (n % 4 != 0) {
            animals += 1;
        }

        cout << animals << endl;
    }
    
    return 0;
}