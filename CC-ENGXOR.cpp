#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll count(ll x)
{
  x = (x & 0x55555555) + ((x >> 1) & 0x55555555);
  x = (x & 0x33333333) + ((x >> 2) & 0x33333333);
  x = (x & 0x0F0F0F0F) + ((x >> 4) & 0x0F0F0F0F);
  x = (x & 0x00FF00FF) + ((x >> 8) & 0x00FF00FF);
  x = (x & 0x0000FFFF) + ((x >> 16)& 0x0000FFFF);
  return x;
}

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t;
	cin >> t;

	while(t--){
		ll n,q,odd=0,even=0;
		cin >> n >> q;
		
		for(ll i=0;i<n;i++){
			ll a;
			cin >> a;
			if(count(a)%2==0){
				even++;
			}
		}
		for(ll i=0;i<q;i++){
			ll p;
			cin >> p;
			if(count(p)%2==0){
				cout << even << " " << n-even << "\n";
			}else cout << n-even << " " << even << "\n";
		}
	}
	return 0;
}