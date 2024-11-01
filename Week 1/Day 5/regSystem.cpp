#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    unordered_map<string, int> username;
    string name;
    
    for (int i = 0; i < n; ++i) {
        cin >> name;
        
        if (username.count(name) == 0) {
            username[name] = 1;
            cout << "OK" << endl;
        } else {
            int suffix = username[name];
            string new_name = name + to_string(suffix);
            
            while (username.count(new_name) != 0) {
                suffix++;
                new_name = name + to_string(suffix);
            }
            
            username[new_name] = 1;
            username[name] = suffix + 1;
            cout << new_name << endl;
        }
    }
    
    return 0;
}
