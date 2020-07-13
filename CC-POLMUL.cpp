#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll t;
	scanf("%lld",&t);
	while(t--){
		ll n,m;
		scanf("%lld%lld",&n,&m);
		ll P[n],Q[m],R[n+m-1]={0};
		for(ll i=0;i<n;i++) scanf("%lld",&P[i]);
		for(ll i=0;i<m;i++) scanf("%lld",&Q[i]);

		if(n>m){
			for(ll i=0;i<m;i++){
				for(ll j=0;j<n;j++){
					R[i+j]+= Q[i]*P[j];
				}
			}
		}else{
			for(ll i=0;i<n;i++){
				for(ll j=0;j<m;j++){
					R[i+j]+= P[i]*Q[j];
				}
			}
		}
		for(ll i=0;i<n+m-1;i++){
			printf("%lld ",R[i]);
		}
		printf("\n");

	}
	return 0;
}