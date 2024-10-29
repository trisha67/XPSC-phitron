#include<bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin >> S;
  unordered_set<char> characters(S.begin(), S.end());

    for (char c = 'a'; c <= 'z'; ++c) {
        if (characters.find(c) == characters.end()) {
            cout << c << endl;
            return 0;
        }
    }
    cout << "None" << endl;

    return 0;
}