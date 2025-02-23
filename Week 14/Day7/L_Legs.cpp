#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int count = 0;
        if(n<4){
            cout<<"1"<<endl;
        }
        else{
            while(n>=4){
                n-=4;
                count++;
            }
            if(n>=2){
                count++;
            }
            cout<<count<<endl;
        }
    }
    return 0;
}