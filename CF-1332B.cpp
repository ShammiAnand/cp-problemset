#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);
} 
int main(){
	int t;
	cin >> t;
	while(t--){
		int color[11]={0};
		int n,count=0;
		cin >> a;
		int a[n];
		// map<int, int> mp;
		vector <int> v;
		for(int i=0;i<1000;i++) v[i]=0;

		for(int i=0;i<n;i++){
			cin >> a[i];
			v[a[i]]++;
			// mp[a[i]]++;
		}
		for(int i=0;i<1000;i++) if(v[i]>0) count++;
		if(count<=11){
			
		}else{
			for(int i=1;i<n;i++){
				if(gcd(a[i-1],a[i])>1){

				}
				for(j=i-1;j>=0;j--){

				}
			}
		}
	}
	return 0;
}
