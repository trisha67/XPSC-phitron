// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a;
//     cin >> a;
//     string s;
//     for (int i = 0; i < a; ++i)
//     {
//         cin >> s;
//         if(s=="++a"||s=="a++"){
//             ++a;
//         }
//         else if (s=="--a"||s=="a--")
//         {
//             --a;
//         }
        
//             }
//     cout << a << endl;
    
// }
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 0;
    string s;
    
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (s == "++X" || s == "X++") {
            ++x;
        } else if (s == "--X" || s == "X--") {
            --x;
        }
    }
    
    cout << x << endl;
    return 0;
}
