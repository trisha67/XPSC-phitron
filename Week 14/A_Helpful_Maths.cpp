#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]!='+'){
            swap(s[i],s[i+2]);
        }
    }
    cout << s << endl;
    
}