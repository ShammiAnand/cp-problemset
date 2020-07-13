#include <iostream>
#include <string>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int k=0;k<t;k++){
		string s,r;
		int n;

		cin >> n;
		cin >> s;
		cin >> r;

		char ss[100],sr[100];
		int sum1=0,sum2=0;
		for(int i=0;i<n;i++){
			ss[i]=s[i];
			sr[i]=r[i];
		}

		for(int i=0;i<n;i++){
			sum1 += (int)ss[i];
			sum2 += (int)sr[i];
		}
		if(sum1==sum2){
			cout << "YES" <<"\n";

		}else{
			cout << "NO" <<"\n";
		}

	}
	return 0;
}