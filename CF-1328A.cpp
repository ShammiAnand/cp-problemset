#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll a,b;
		cin >> a >> b;
		if(a%b==0){
			cout << 0 << "\n";
		}else{
			cout << b-a%b << "\n";
		}
	}
	return 0;
}