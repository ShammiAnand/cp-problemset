#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll t;
	scanf("%lld",&t);
	while(t--){
		ll n,q;
		scanf("%lld%lld",&n,&q);
		ll a[n];
		for(ll i=0;i<n;i++) scanf("%lld",&a[i]);
		while(q--){
			ll x1,x2,y,count;
			scanf("%lld%lld%lld",&x1,&x2,&y);
			for(ll i=0;i<n-1;i++){
				if((y>=a[i]&&y<=a[i+1])||(y<=a[i]&&y>=a[i+1])){
					if((((i+1)!=x2)&&((i+2)!=x1))&&((x2>=(i+1))&&(x1<=(i+1)))){
						count++;
						continue;
					}
				}
			}
			printf("%lld\n",count);
			count=0;
		}
	}
	return 0;
}