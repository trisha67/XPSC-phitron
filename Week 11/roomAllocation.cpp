#include <bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while(t--){
    int n;
    cin >> n;
    int sum=0;  
    int r[n];
    for (int i=0;i<n;i++){
        cin >> r[i];    
        if (r[i]<=2){
          sum =sum +1;
        }
        else if(r[i]%2==0){
            sum =sum +(r[i]/2);
        }
        else if (r[i]%2!=0){
           sum =sum +(r[i]/2)+1;
        }
        
      }
        cout << sum <<endl;
    }

}