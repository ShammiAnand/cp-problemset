#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int>v={0};
		for(int i=0;i<n;i++) cin >> v[i];
		sort(v.begin(), v.begin()+n,greater<int>());
		for(int i=0;i<n;i++){
			printf("%d ",v[i]);
		}
		printf("\n");
	}
	return 0;
}