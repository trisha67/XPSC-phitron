#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long arr[n];
        for (long long i = 0; i < n; i++)
            cin >> arr[i];

        long long maxi = *max_element(arr, arr + n);
        long long mini = *min_element(arr, arr + n);

        cout << maxi - mini << endl;
    }

    return 0;
}
