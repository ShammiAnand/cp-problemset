#include<iostream>
#include<string>
using namespace std;

int main(){
	int matches[10] = {6,25,5,5,4,5,6,3,7,6};
	int A,B;
	int t;
	cin >> t;
	for(int k=0;k<t;k++){
		cin >> A >> B;
		
		int result = A+B;
		string req = to_string(result);
		int n=req.length();
		char count[n];
		
		
		for(int i=0;i<n;i++){
			count[i]=req[i];
		}
		int sum=0;
		for(int i=0;i<n;i++){
			int k = (int)count[i];
			sum += matches[k];
		}
		cout << "\n";
		cout << sum << "\n";

	}
	return 0;
}