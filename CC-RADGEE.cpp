#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll t;
	scanf("%lld",&t);
	while(t--){
		//r:radhesh's points, g: geethakomaare's points
		ll n,m,r=0,g=0,counter=0,ri,gi;
		scanf("%lld%lld",&n,&m);
		vector <ll> R;
		vector <ll> G;
		ll M[m];

		for(ll i=0;i<n;i++){
			scanf("%lld",&ri);
			R.push_back(ri);
		}

		for(ll i=0;i<n;i++){
			scanf("%lld",&gi);
			G.push_back(gi);
		}

		for(ll i=0;i<m;i++){
			scanf("%lld",&M[i]);
		}
		// brute force logic
		for(ll i=0;i<(m/2);i++){
			if(R[i]>G[i]){
				R.push_back(M[counter++]);
				G.push_back(M[counter++]);
				r++;
			}else{
				G.push_back(M[counter++]);
				R.push_back(M[counter++]);
				g++;
			}
		}
		for(ll i=m/2;i<(n+m/2);i++){
			if(R[i]>G[i]) r++;
			else g++;
		}

		//results
		if(r>g) printf("Radhesh wins\n");
		else if(r<g) printf("Geethakoomaree wins\n");
		else printf("Tie\n");
	}
	return 0;
}