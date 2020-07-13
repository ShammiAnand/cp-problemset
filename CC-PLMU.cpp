#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int k=0;k<t;k++){
		int n;
		cin >> n;
		long long int arr[n];
		int count0 =0;
		int count2=0;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		for(int i=0;i<n;i++){
			if(arr[i]==0){
				count0++;
			}
			if(arr[i]==2){
				count2++;
			}
		}
		// cout << "\n";
		int count = ((count0*(count0-1))+(count2*(count2-1)))/2;
		cout << count << "\n";

	}
	return 0;
}