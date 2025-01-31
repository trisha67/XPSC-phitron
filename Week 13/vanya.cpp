#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,h;
    cin >> n >> h;
    long long a[n];
    long long count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]>h){
            count+=2;
        }
        else if(a[i]<=h){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}