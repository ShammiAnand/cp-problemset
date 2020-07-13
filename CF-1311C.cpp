#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll t;
	cin >> t;
	while(t--){
		int alpha[26]={0};
		ll n,m;
		cin >> n >> m;
		string s;
		cin >> s;
		ll p[m];
		for(int i=0;i<m;i++) cin >> p[i];
		for(int i=0;i<n;i++) alpha[s[i]-'a']++;

		for(int i=0;i<m;i++){
			for(int j=0;j<p[i];j++){
				alpha[s[j]-'a']++;
			}
			// alpha[s[i]-'a']+=n-p[i];
		}

		for(int i=0;i<26;i++) cout << alpha[i] << " ";
		cout << endl;
	}
	return 0;
}