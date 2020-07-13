#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ll n,m,p,xf,xg;
	scanf("%lld%lld%lld",&n,&m,&p);
	ll f,g;
	bool found = false;
	for(ll i=0;i<n;i++){
		scanf("%lld",&f);
		if(f%p && !found){
			xf=i;
			found = true;
		}
	}
	found = false;
	for(ll i=0;i<m;i++){
		scanf("%lld",&g);
		if(g%p && !found){
			xg = i;
			found = true;
		}
	}

	cout << xf+xg << "\n";
	return 0;
}