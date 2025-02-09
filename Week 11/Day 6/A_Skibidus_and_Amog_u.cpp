#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string find = "us" ;
        string replace = "i" ;
        int pos = s.rfind(find);
        if(pos!=-1){
            s.replace(pos,find.length(),replace) ;
        }
        cout << s << endl;
    }
    
    return 0;
}