#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll t;
	cin >> t;
	while(t--){
		ll x,y,a,b,count=0;
		cin >> x >> y >> a >> b;

		if((y-x)%(a+b)==0) cout << (y-x)/(a+b) << endl;
		else cout << -1 << endl;
	}
	return 0;
}