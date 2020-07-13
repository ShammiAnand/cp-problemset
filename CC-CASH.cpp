#include<iostream>
using namespace std;
#define ll long long
int main(){
	ll t;
	scanf("%lld",&t);
	while(t--){
		ll n,k,sum=0,rem=0;
		scanf("%lld%lld",&n,&k);
		ll arr[n];
		for(int i=0;i<n;i++){
			scanf("%lld",&arr[i]);
			sum+=arr[i];
		}
		// for(int i=0;i<n;i++) sum+=arr[i];
		rem = sum - ((sum/k)*k);
		printf("%lld\n",rem);
	}
	return 0;
}