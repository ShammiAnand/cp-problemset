#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){

		int n,m;

		cin >> n >> m;

		int a[n],a_sorted[n],p[m];
		for(int i=0;i<n;i++) cin >> a[i];
		for(int i=0;i<m;i++) cin >> p[i];
		for(int i=0;i<n;i++) a_sorted[i]=a[i];

		sort(a_sorted,a_sorted+n);
		sort(p,p+m);
		bool ispossible = true;
		
		if(p[0]!=1){
			if(a_sorted[0]!=a[0]){
				cout << "NO\n";
				continue;
			}
		}else{
			for(int i=0;i<n-1;i++){
				if(a[i]>a[i+1]){
					if(binary_search(p,p+m,i+1)) continue;
					else ispossible=false;
				}
			}
			if(ispossible) cout << "YES\n";
			else cout << "NO\n";
		}
	}
	return 0;
}