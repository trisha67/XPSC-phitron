#include <bits/stdc++.h>
using namespace std;

int reverseMoves(int finalDigit, const string& moves) {
    int current = finalDigit;
    for (int i = moves.size() - 1; i >= 0; --i) {
        if (moves[i] == 'U') {
            current = (current - 1 + 10) % 10;
        } else if (moves[i] == 'D') {
            current = (current + 1) % 10;
        }
    }
    return current;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> finalState(n);
        for (int i = 0; i < n; ++i) {
            cin >> finalState[i];
        }
        
        vector<int> initialState(n);
        for (int i = 0; i < n; ++i) {
            int b;
            string moves;
            cin >> b >> moves;
            
            initialState[i] = reverseMoves(finalState[i], moves);
        }
        
        for (int i = 0; i < n; ++i) {
            cout << initialState[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
