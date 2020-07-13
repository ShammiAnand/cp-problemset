#include<iostream>
using namespace std;

int main(){
	int n;
	long long int  c, sum;
	cin >> n;
	for(int i=0;i<n;i++){
		//c is the total number of radiator and sum is total sections
		cin >> c >> sum;
		if(sum==1){
			cout  << sum << "\n";
		}else{
			if(sum%c==0){
				cout << c*(sum/c)*(sum/c) << "\n";
			}else{
				cout << (c-(sum%c))+(sum%c)*(sum-c)*(sum-c) << "\n";
			}

		}
	}
	return 0;
}