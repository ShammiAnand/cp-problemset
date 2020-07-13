#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll t,s;
	cin >> t >> s;
	while(t--){
		ll n;
		cin >> n;
		ll a[n],b[n];
		map <ll , ll> mp;
		for(ll i=0;i<n;i++) cin >> a[i];
		for(ll i=0;i<n;i++){
			cin >> b[i];
			mp[b[i]]++;
		}

		sort(a,a+n);
		sort(b,b+n);
		bool isPossible = true;
		for(ll i=0;i<n;i++){
			if(b[i]<=a[i]){
				isPossible=false;
				break;
			}
		}
		for(ll i=1;i<n;i++){
			if((a[i]==a[i-1])||(mp[a[i]]>0)) continue;
            else
            {
                isPossible=false;
                break;
            }
		}
		if(isPossible) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}