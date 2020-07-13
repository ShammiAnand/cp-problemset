#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int k=0;k<t;k++){
		int n;
		cin >> n;
		double num= n;
		long double A[n];
		long double coin=0;
		for(int i=0;i<n;i++){
			cin >> A[i];
		}
		long double sum =0;

		for(int i=0;i<n;i++){
			sum += A[i];
		}
		bool possible=false;

		long double mean = sum/num;
		long double new_mean = 0;
		for(int i=0;i<n;i++){
			new_mean = (sum-A[i])/(num-1);
			if(new_mean==mean){
				possible = true;
				coin = A[i];
				break;
			}
		}
		if(possible){
			cout << coin << endl;
		}else{
			cout << "Impossible" << endl;
		}

	}
	return 0;
}