#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,umprince=0,umprincess=0;
		cin >> n;
		bool possible = false;
		bool prince[n]={false},princess[n]={false};

		for(int i=0;i<n;i++){
			int k;
			cin >> k;
			int g[k];
			for(int j=0;j<k;j++){
				cin >> g[j];
				g[j]--;
			}
			for(int j=0;j<k;j++){
				if(!prince[g[j]]){
					princess[j]=true;
					prince[g[j]]=true;
					break;
				}
			}
		}
		for(int i=0;i<n;i++){
			if(!princess[i]){
				umprincess=i+1;
				possible = true;
				break;
			}
		}
		for(int i=0;i<n;i++){
			if(!prince[i]){
				umprince=i+1;
				break;
			}
		}
		if(!possible) cout << "OPTIMAL\n";
		else{
			cout << "IMPROVE\n" << umprincess << " " << umprince << "\n";
		}
	}
	return 0;
}