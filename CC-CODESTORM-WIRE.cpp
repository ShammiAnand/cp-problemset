#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,a,b,c,count=0,mx=0,k;
		cin >> n >> a >> b >> c;
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++){
				if((n-(i*a+j*b))>=0&&(n-(i*a+j*b))%c==0){
					k=(n-(i*a+j*b))/c;
					count=i+j+k;
					mx=max(mx,count);
				} 
				count=0;
			}
		}
		cout << mx << endl;
	}
	return 0;
}