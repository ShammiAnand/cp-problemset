#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll k,n,sum=0;
	scanf("%lld%lld",&k,&n);
	ll A[2*n];
	bool flag = true;
	for(ll i=0;i<n;i++){
		scanf("%lld",&A[i]);
		A[n+i] = A[i];

	}
	ll mn=1000000,fsum=0,bsum=0;
	for(ll i=0;i<n;i++){
		fsum=0,bsum=0;
		for(ll j=i;j<n+i;j++){
			fsum+= abs(A[j+1]-A[j]);
		}
		for(ll j=2*n-1-i;j>=n-i;j--){
			bsum+= abs(A[j]-A[j-1]);
		}
		mn = min(mn,min(fsum,bsum));
	}

	printf("%lld\n",mn);
	
	return 0;
}