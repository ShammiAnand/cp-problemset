#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++) cin >> a[i];
		int count=0;
		for(int i=0;i<n-2;i++){
			for(int j=i+2;j<n;j++){
				if(a[i]==a[j]) count++;
			}
		}
		if(count>0) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}