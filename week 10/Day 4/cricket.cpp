#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
         if (n <= m - 1) 
            cout << "YES" << endl;
         else 
            cout << "NO" << endl;
    }
    return 0;
}