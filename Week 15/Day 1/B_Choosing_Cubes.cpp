#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int a[100];
    while (t--)
    {

		int n,f,k,fav;
		
		cin>>n>>f>>k;
		for(int i = 0; i<n; i++){
			cin >> a[i];
		}
		
		fav = a[f-1];
		
		sort(a, a+n, greater<int>());
		
		if(k==n || a[k] < fav){
			cout << "YES";
		}
		
		else if(a[k] == fav	&& a[k-1] == fav){
			cout << "MAYBE";
		}
		
		else{
			cout << "NO";
		}
		cout << endl;
	}
}