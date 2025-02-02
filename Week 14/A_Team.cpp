#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int a,b,c,count=0;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        if(a+b+c>=2){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}