#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll t;
	scanf("%lld",&t);
	while(t--){
		ll n,k,count=0,div=0;
		scanf("%lld%lld",&n,&k);
		ll b[n]={0};
		ll a[n];
		bool flag = true;
		for(ll i=0;i<n;i++) scanf("%lld",&a[i]);
		for(ll i=0;i<n;i++){
			if(a[i]%k!=0) count++;
			if(count>1){
				cout << "NO\n";
				flag=false;
				break;
			}
		}
		if(flag){
			cout << "YES\n";
		}else continue;
	}
	return 0;
}