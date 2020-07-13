#include <iostream>
using namespace std;

// bool allZeroes(int* arr,int n){
// 	for(int i=0;i<n;i++){
// 		if(arr[i]!=0) return false;
// 	}
// 	return true;
// }

int arraySum(int* arr, int n){
	int sum=0;
	for(int i=0;i<n;i++) sum+=arr[i];
	return sum;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++) cin >> arr[i];
		int odd=-1,even=-1;
		if(arraySum(arr,n)%2==0) {
			if(n%2==0){
				for(int i=0;i<n;i++){
					if(arr[i]%2==0){
						even=i;
					}else{
						odd=i;
					}
				}
				if(odd!=-1&&even!=-1) cout << "YES\n";
				else cout << "NO\n";
				
				// arr[even]=arr[odd];
				// if(arraySum(arr,n)%2==0) cout << "NO\n";
				// else cout << "YES\n";
			}else{

				
				for(int i=0;i<n;i++){
					if(arr[i]%2==0){
						even=i;
					}else{
						odd=i;
					}
				}
				if(odd!=-1&&even!=-1) cout << "YES\n";
				else cout << "NO\n";

				// arr[even]=arr[odd];
				// if(arraySum(arr,n)%2==0) cout << "NO\n";
				// else cout << "YES\n";
			}
		}else{
			cout << "YES\n";
		}
	}
	return 0;
}