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
        int x = 0, i = 1;

        while (1) {
            int m = 2 * i - 1;

            if (i % 2 == 1) {
                x -= m;
                if (abs(x) > n) {
                    cout << "Sakurako" << endl;
                    break;
                }
            } else {
                x += m;
                if (abs(x) > n) {
                    cout << "Kosuke" << endl;
                    break;
                }
            }
            i++;
        }
    }

    return 0;
}