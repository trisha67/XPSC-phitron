#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        s[0]=toupper(s[0]);
    }
    cout << s << endl;
}