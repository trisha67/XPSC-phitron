#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    bool check;
    string s;
    while (t--)
    {
        check = false;
        cin>>s;
        if(s[0]=='1' && s[1]=='0' && s.size()>=3)
        {
            if(s.size()==3)
            {
                if(s[2]!='0' && s[2]!='1')
                {
                    check = true;
                }
            }
            else if((s.size()==4 || s.size()==5) && s[2]!='0')
            {
                check = true;
            }
        }
        if(check) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}