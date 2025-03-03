#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        int totalSum = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            totalSum += a[i];
        }
        if(totalSum == 0){
            cout << "NO" << "\n";
            continue;
        }
        cout << "YES" << "\n";
        if(totalSum > 0)
            sort(a.begin(), a.end(), greater<int>());
        else
            sort(a.begin(), a.end());
        for (int x : a)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}