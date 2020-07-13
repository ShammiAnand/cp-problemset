#include<iostream>
using namespace std;

int main(){

	int t;
	cin >> t;
	for(int j=0;j<t;j++){
		string s;
		cin >> s;
		int n = s.length();
		bool flag= true;
		for(int i=1;i<n-1;i++){
			if(s[i-1]==s[i]&&s[i-1]!='?'){
				flag=false;
				break;
			}else{
				if(s[i-1]=='a'&&s[i]=='?'){
					if(s[i+1]=='?'||s[i+1]=='a'||s[i+1]=='c'){
						s[i]='b';
						continue;
					}else{
						s[i]='c';
					}
				}else if(s[i-1]=='b'&&s[i]=='?'){
					if(s[i+1]=='?'||s[i+1]=='b'||s[i+1]=='a'){
						s[i]='c';
						continue;
					}else{
						s[i]='a';
					}
				}else if(s[i-1]=='c'&&s[i]=='?'){
					if(s[i+1]=='?'||s[i+1]=='c'||s[i+1]=='b'){
						s[i]='a';
						continue;
					}else{
						s[i]='b';
					}
				}
			}
		}

		//output
		if(flag){
			cout << s << "\n";
		}else{
			cout << -1 << "\n";
		}
	}

	return 0;
}
