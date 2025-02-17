#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
    {
        int x,y,count=0;
        cin>>x>>y;
        
        while(x>0 || y>0){
            if(y>=2){
                y-=2;
                x-=7;
                count++;
            }
            else if(y==1){
                x-=11;
                y-=1;
                count++;
            }
            else{
                x-=15;
                count++;
            }
        }cout<<count<<endl;
    }
}