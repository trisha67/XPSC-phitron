#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int s, l, xl;
        int a, b, c;
        cin >> s >> l >> xl >> a >> b >> c;
        
        int happyXl = min(xl,c);
        xl -= happyXl;
        int d = min(l,b);
        int r = b-d;
        int LToxl = min(xl,r);
        int happyL = d+LToxl;
        xl -= LToxl;
        int extra = max(0,l-b);
        int totalS = s + extra + xl;
        int happyS = min(a,totalS);
        cout << (happyXl+happyL+happyS) << endl;
    }
    return 0;
}