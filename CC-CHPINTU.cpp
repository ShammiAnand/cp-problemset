#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){

		int n,m,temp,count=0;
		cin >> n >> m;
		int f[n],p[n];

		for(int i=0;i<n;i++){
			cin >> f[i];
		}
		
		for(int i=0;i<n;i++){
			cin >> p[i];
		}

		int sum[m];
		for(int i=0;i<m;i++){
			sum[i]=-1;
		}
		for(int i=0;i<n;i++){
			sum[f[i]-1]=0;
		}
		for(int i=0;i<n;i++){
			sum[f[i]-1]+=p[i];
		}
		sort(sum,sum+m);

		for(int i=0;i<m;i++){
			if(sum[i]!=-1){
				cout << sum[i] << endl;
				break;
			}
		}
	}
	return 0;
}