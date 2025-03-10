#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  
    int n;
    long long x;
    cin >> n >> x;
        vector<pair<int,int>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }
        sort(arr.begin(),arr.end());
        for (int i = 0; i < n; i++) {
        long long target = x - arr[i].first;
        int left = i + 1, right = n - 1;
        
        while (left < right) {
            long long sum = arr[left].first + arr[right].first;
            if (sum == target) {
                vector<int> result = {arr[i].second, arr[left].second, arr[right].second};
                sort(result.begin(), result.end());
                cout << result[0] << " " << result[1] << " " << result[2] << endl;
                return 0;
            }
            if (sum < target)
                left++;
            else
                right--;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}