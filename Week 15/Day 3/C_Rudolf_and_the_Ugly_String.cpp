#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int size;
        string s;
        cin >> size >> s;  

        int beauty = 0;  

        if (size < 3) {  
            cout << beauty << endl;
            continue;
        }

        for (int i = 0; i <= size - 3; i++) {  
            string sub = s.substr(i, 3);  

            if (sub == "map" || sub == "pie") { 
                beauty++;
                i += 2;  
            }
        }

        cout << beauty << endl;
    }

    return 0;
}