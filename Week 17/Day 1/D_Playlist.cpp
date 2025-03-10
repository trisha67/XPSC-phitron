#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> songs(n);
    for (int i = 0; i < n; i++) {
        cin >> songs[i];
    }
    vector<long long> sorted = songs;
    sort(sorted.begin(),sorted.end());
    sorted.erase(unique(sorted.begin(),sorted.end()),sorted.end());
    
    vector<int> lst(sorted.size(), -1);
    
    int start = 0;
    int max_Length = 0;
    
    for (int i = 0; i < n; i++) {
        int id = lower_bound(sorted.begin(),sorted.end(),songs[i])-sorted.begin();
        
        if (lst[id] >= start) {
            start = lst[id] + 1;
        }  
        lst[id] = i;  
        max_Length = max(max_Length,i-start+1);
    }
    cout << max_Length << endl;
    return 0;
}