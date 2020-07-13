#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ll n,b=0;
	cin >> n;
	string s;
	cin >> s;
	bool regular = true;
	for(ll i=0;i<n;i++){
		if(s[i]==')'){
			b--;
			if(b<0){
				regular=false;
			}
		}else b++;
	}
	if(b==0) regular = true;

	
}