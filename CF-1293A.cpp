#include <iostream>
#include <algorithm>
using namespace std;
#define ll int

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n,k,s;
		cin >> n >> s >> k;
		//0 is closed , 1 is open;
		ll floors[n+1];
		for(ll i=1;i<=n;i++){
			floors[i]=1;
		}

		ll in;
		for(ll i=1;i<=k;i++){
			
			cin >> in;
			floors[in]=0;
			in=0;
		}
		
		ll fc=0,bc=0;
		if(floors[s]==1){
			cout << 0 << "\n";
		}else{
			//forward count
			for(ll i=s;i<=n;i++){
				if(floors[i]==0){
					fc++;
					if(i==n){
						fc=n;
						break;
					}
				}
				else break;
			}

			//backward count
			for(ll i=s;i>=1;i--){
				if(floors[i]==0){
					bc++;
					if(i==1){
						bc=n;
						break;
					}
				}
				else break;
			}

			ll best = min(fc,bc);
			cout << best << "\n";
		}
	}
	return 0;
}
