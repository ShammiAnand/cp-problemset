#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t;
	scanf("%lld",&t);
	while(t--){
		ll n,q,qi,ai,mx=0;
		scanf("%lld%lld",&n,&q);
		ll A[n]={0};
		for(ll i=0;i<n;i++){
			scanf("%lld",&ai);
			mx = max(mx,ai);
			A[i]=mx;
		}
		while(q--){
			scanf("%lld",&qi);
			printf("%lld\n",A[qi-1]);
		}
	}
	return 0;
}