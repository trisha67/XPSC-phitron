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
        string a,b;
        cin >> a >> b;
 
        int count00 = 0, count11 = 0, counta = 0;
        for (int i = 0; i < n; i++){
            if (a[i] == b[i]) {
                if (a[i] == '0'){
                    count00++;
                }
                else{
                    count11++;
                }
            } 
            else {
                counta++;
            }
        }
 
        bool flag = false;
        if(n%2== 0) {
            if(count00%2 == 0 && count11%2 == 0 && counta%2 == 0)
                flag = true;
        } 
        else {
            int oddCount = (count00%2) + (count11%2) + (counta%2);
            if(oddCount == 1)
                flag = true;
        }
        if(flag){
            cout << "YES" <<endl;
        } 
        else{
        cout << "NO" << endl;
    }
}
    return 0;
}