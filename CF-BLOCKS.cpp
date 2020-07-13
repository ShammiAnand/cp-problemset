#include<iostream>
using namespace std;

int main(){
	int n;
	string s;
	cin >> n >> s;

	int black=0;white=0;
	for(int i=0;i<n;i++){
		if(s[i]=='B'){
			black++;
		}
		if(s[i]=='W'){
			white++;
		}
	}
	if(black%2==0||white%2==0){
		if(black==0||white==0){
			cout << 0 << "\n";
		}else{
			for(int i=0;i<n-1;i++){
				if(s[i]=='B'&&s[i+1]=='B'){
					
				}
			}
		}
	}else{
		cout << -1 << "\n";
	}

	return 0;
}