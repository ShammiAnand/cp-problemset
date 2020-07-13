#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ll t;
	scanf("%lld",&t);
	while(t--){
		//Bob : a, Alice : b;
		ll n,a,b,alice=0,bob=0,both=0;
		scanf("%lld%lld%lld",&n,&a,&b);
		ll A[n];
		for(ll i=0;i<n;i++){
			scanf("%lld",&A[i]);
			if(A[i]%a==0) bob++;
			if(A[i]%b==0) alice++;
			if(A[i]%b==0&&A[i]%a==0) both++;
		}
		if(a==b){
			cout << "BOB\n";
			continue;
		}else{
			if(bob>alice){
				cout << "BOB\n";
				continue;
			}else if(alice > bob){
				cout << "ALICE\n";
				continue;
			}else{
				if(both>0){
					cout << "BOB\n";
					continue;
				}else{
					cout << "ALICE\n";
					continue;
				}
			}
		}
	}
	return 0;
}