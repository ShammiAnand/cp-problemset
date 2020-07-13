#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int p=0;p<t;p++){
		long long n,k;
		cin >> n >> k;
		long long spared=0;
		(n%k==0)?spared=0:spared = n%k-k/2;
		(n<=k)?cout << n << "\n":cout << n-spared << "\n";
	}
	return 0;
}
