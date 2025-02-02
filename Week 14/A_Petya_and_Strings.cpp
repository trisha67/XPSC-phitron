#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b;
    cin >> a >>b;
    for (int i = 0; i < a.size(); i++)
    {
        a[i]=toupper(a[i]);
        b[i]=toupper(b[i]);
    }
    
    if(a==b){
        cout << 0 << '\n';
    }
    if(a<b){
        cout << -1 << '\n';
    }
    if(a>b){
        cout << 1 << '\n';
    }
}