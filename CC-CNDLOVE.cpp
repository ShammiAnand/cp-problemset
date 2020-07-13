#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for (int k = 0;k < t;k++){
		int n;
		cin >> n;
		int candy[n];
		for(int i=0;i<n;i++){
			cin >> candy[i];
		}
		int sum =0;
		for(int i=0;i<n;i++){
			sum += candy[i];
		}
		if(sum%2==1){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
	return 0;
}