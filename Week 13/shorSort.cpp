#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        string ans;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[0]=='a'||s[1]=='b'||s[2]=='c')
            {
               ans= "YES" ;
            }
            else{
                ans="NO";
            }
            
        }
        cout << ans <<'\n';
        

    }
    
    return 0;
}