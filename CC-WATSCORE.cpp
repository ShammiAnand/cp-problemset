#include<iostream>
#include<algorithm>

using namespace std;
int main(){
	int t;
	cin >> t;
	for(int k=0;k<t;k++){
		int n;
		cin >> n;
		int arr[11];
		for(int i=0;i<11;i++){
			arr[i]=0;
		}
		for(int i=0;i<n;i++){
			int p,s;
			cin >> p >> s;
			if(arr[p-1]<=s){
				arr[p-1]=s;
			}else{
				continue;
			}
		}
		int sum=0;
		for(int i=0;i<8;i++){
			sum += arr[i];
		}
		// cout << "\n";

		cout << sum << "\n";

	}
	return 0;
}
