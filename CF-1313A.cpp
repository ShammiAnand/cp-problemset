#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a[3],count=0;
		for(int i=0;i<3;i++) cin >> a[i];
		sort(a,a+3);
		
		if(a[0]>0){
			a[0]--;
			count++;
		}
		if(a[1]>0){
			a[1]--;
			count++;
		}
		if(a[2]>0){
			a[2]--;
			count++;
		}
		if(a[2]>0&&a[1]>0){
			a[2]--;
			a[1]--;
			count++;
		}
		if(a[2]>0&&a[0]>0){
			a[2]--;
			a[0]--;
			count++;
		}
		if(a[0]>0&&a[1]>0){
			a[1]--;
			a[0]--;
			count++;
		}
		if(a[0]>0&&a[1]>0&&a[2]>0){
			a[1]--;
			a[0]--;
			a[2]--;
			count++;
		}
		cout << count << endl;
	}
	return 0;
}