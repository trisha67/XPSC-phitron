#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    string vowels = "aeiou";
    
    while (t--) {
        int n;
        cin >> n;
        string result;
        
        for (int i = 0; i < n; ++i) {
            result += vowels[i % 5];
        }

        cout << result << endl;
    }
    
    return 0;
}