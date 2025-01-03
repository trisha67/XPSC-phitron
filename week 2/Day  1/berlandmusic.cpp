#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n];
        map<int, int> index_map;
        vector<int> ones, zeroes;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
            index_map[a[i]] = i;
        }

        string s;
        cin >> s;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0')
                zeroes.push_back(a[i]);
            else
                ones.push_back(a[i]);
        }

        sort(zeroes.begin(), zeroes.end());
        sort(ones.begin(), ones.end());
        sort(a, a + n);

        reverse(zeroes.begin(), zeroes.end());
        reverse(ones.begin(), ones.end());
        reverse(a, a + n);

        int i;
        for (i = 0; i < ones.size(); i++) {
            b[index_map[ones[i]]] = a[i];
        }
        for (int j = 0; j < zeroes.size(); j++) {
            b[index_map[zeroes[j]]] = a[i];
            i++;
        }

        for (int i = 0; i < n; i++){
            cout << b[i] << " ";
        cout << endl;
        }
    }
    return 0;
}