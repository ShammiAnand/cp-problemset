#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x=0,y=0;
		bool xa=true,ya=true;
		string s;
		cin >> n;
		cin >> s;
		for(int i=0;i<n;i++){
			if(s[i]=='L'&&xa){
				x--;
				xa=false;
				ya=true;
			}
			if(s[i]=='R'&&xa){
				x++;
				xa=false;
				ya=true;
			}
			if(s[i]=='D'&&ya){
				y--;
				xa=true;
				ya=false;
			}
			if(s[i]=='U'&&ya){
				y++;
				xa=true;
				ya=false;
			}
		}
		printf("%d %d\n",x,y);
	}
	return 0;
}