#include<iostream>
#include<algorithm>
using namespace std;
int odd(int n){
	//takes a number greater than one
	int count =0;
	for (int i = 3; i <= n; i+=2){
		count++;
	}
	return count;
}
int main(){
	int t;
	cin >> t;
	for(int k=0;k<t;k++){
		//input
		int m,n;
		cin >> n >> m;
		int arr[n][m];
		for(int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				cin >> arr[i][j];
			}
		}
		//logic
		int count = (m*n)+odd(min(m,n));
		cout << count << "\n";

	}
	return 0;
}