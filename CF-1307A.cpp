#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,d;
		cin >> n >> d;
		int arr[n];
		for(int i=0;i<n;i++) cin >> arr[i];
		int counter=1;
		if(n>1){
			while(d>0){
				if(counter*arr[counter]<d) arr[0] += arr[counter];
				else arr[0] += d/counter;
				d -= counter*arr[counter];
				counter++;
				if(counter == n) break;
			}
		}
		cout << arr[0] << endl;
	}
	return 0;
}