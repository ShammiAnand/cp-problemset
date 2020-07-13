#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;
	long long int n;
	for(int i=0;i<t;i++){
		cin >> n;
		int arr[n][2];
		for(int j=0;j<n;j++){
			cin >> arr[j][0] >> arr[j][1];
		}
		int l_max=arr[0][0];
		int r_min=arr[0][1];
		for(int j=0;j<n;j++){
			
			if(l_max<=arr[i][0]){
				l_max=arr[i][0];
			}
		}
		for(int j=0;j<n;j++){
			
			if(r_min>=arr[i][1]){
				r_min=arr[i][1];
			}
		}
		cout << max(0,r_min-l_max) << "\n";
	}
	return 0;
}