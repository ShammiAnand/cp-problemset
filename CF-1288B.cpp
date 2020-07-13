#include<iostream>
using namespace std;
#define ll long long

ll len(ll n){
	ll count=0;
	while(n>0){
		n = n/10;
		count++;
	}
	return count;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll a,b;
		cin >> a >> b;
		cout << a*(len(b+1)-1) << "\n";
	}
	return 0;
}