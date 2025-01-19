#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    long long sum=0;

    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i]; 
        sum+=a[i];}
      sort(a.begin(),a.end());
      
       cout<<2*sum-a[0]-a[1]<<endl;
        
    }
    
}