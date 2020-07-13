#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int count=0;
		string S;
		cin >> S;
		for(int i=0;i<S.length()-1;i++){
			int looped=0;
			if(S[i]=='1'){
				for(int j=i+1;j<S.length()&&S[j]=='0';j++){
					count++;
					looped++;
				}
				if(looped==(S.length()-i-1)) count -= looped;
			}
		}
		cout << count << "\n";
	}
	return 0;
}