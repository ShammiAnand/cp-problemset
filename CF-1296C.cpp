#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,r,l,mx=0;
		cin >> n;
		string s;
		cin >> s;
		pair<int , int> p;
		
		for(int i=0;i<n;i++){
			p.first=0;
			p.second=0;
			for(int j=i;j<n;j++){
				if(s[j]=='L') p.first--;
				else if(s[j]='R') p.first++;
				else if(s[j]='U') p.second++;
				else  p.second--;
			}
			if(p.first==0&&p.second==0){
				l=i+1;
				r=n;
				mx = max(mx,l-r+1);
				break;
			}
		}
		cout << l << r << endl;
	}
	return 0;
}