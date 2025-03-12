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
        cin >> n;
        vector<int>x(n),y(n);
        for (int i = 0; i < n; i++){
            cin >> x[i];
        }
        for (int i = 0; i < n; i++){
            cin >> y[i];
        }  
        int p = y[0];
        int pivot = -1;
        for (int i = 0; i < n; i++){
            if (x[i] == p){
                pivot = i + 1;
                break;
            }
        }
        vector<pair<int,int>> L;
        for (int j = 0; j < n; j++){
            L.push_back({abs(x[j]-p),x[j]});
        }
        sort(L.begin(),L.end());
        
        vector<int>YCom;
        for (int j = 0; j < n; j++){
            YCom.push_back(L[j].second);
        }
        if(YCom == y){
            cout << pivot << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}