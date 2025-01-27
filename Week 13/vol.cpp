#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int cuboid = a*b*c;
    int cube = pow(d,3);
    if (cube>cuboid) {

    cout << "Cube" << endl;
    }
    else if(cuboid>cube){
    cout << "Cuboid" << endl;
    }
    else{
        cout << "Equal" << endl;
    }
    // cout << result << '\n';
    
    return 0;
}