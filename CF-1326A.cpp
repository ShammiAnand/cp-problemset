#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s="2";
		if(n<2){
			cout << -1 << "\n";
		}else{
			for(int i=0;i<n-1;i++){
				s.push_back('3');
			}
			cout << s << "\n";
		}
	}
	return 0;
}