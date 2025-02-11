#include <iostream>
using namespace std;

int main() {
    int t;  
    cin >> t;  // Read the number of test cases

    while (t--) {  
        int n, sum = 0;
        cin >> n;  // Read the size of the array

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;  // Read each number
            sum += x;  // Add it to the sum
        }

        // If the sum is even, print "YES", otherwise print "NO"
        if (sum % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
