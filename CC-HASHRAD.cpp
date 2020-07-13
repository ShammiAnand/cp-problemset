#include<bits/stdc++.h>
using namespace std;

int hashValue(string s){
	int hsh=0;
	for(int i=0;i<s.length();i++){
		hsh += s[i]-'a';
	}
	return hsh;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s,sc;
		cin >> s;
		if(s.length()>1){
			for(int i=0;i<s.length();i++){
				//think of something!
			}

		}else{
			cout << hashValue(s) << " " << s << "\n";
		}
	}
	return 0;
}