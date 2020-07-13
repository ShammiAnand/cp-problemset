#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll t;
	scanf("%lld",&t);
	while(t--){
		ll n,count=1;
		scanf("%lld",&n);
		ll a[n];
		for(ll i=0;i<n;i++) scanf("%lld",&a[i]);
		sort(a,a+n);
		for(ll i=0;i<n-1;i++){
			if(a[i]!=a[i+1]){
				count++;
			}
		}
		printf("%lld\n",count);
	}
	return 0;
}