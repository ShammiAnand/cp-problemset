#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long

int main(){
	ll t;
	scanf("%lld",&t);
	while(t--){
		ll n,sum=0;
		scanf("%lld",&n);
		ll A[n], B[n];
		for(int i=0;i<n;i++) scanf("%lld",&A[i]);;
		for(int i=0;i<n;i++) scanf("%lld",&B[i]);;
		sort(A,A+n);
		sort(B,B+n);
		
		for(int i=0;i<n;i++) sum+= min(A[i],B[i]);
		printf("%lld\n",sum);
	}
	return 0;
}