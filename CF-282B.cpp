#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll n;
	cin >> n;
	string s;
	vector < pair <int, int> > v;
	ll a,g;
	for(int i=0;i<n;i++){
		cin >> a >> g;
		v.push_back(make_pair(a,g));
	}
	ll sa=0,sb=0;
	for(int i=0;i<n;i++){
		if(abs((sa+v[i].first)-sb)<=500){
			sa+=v[i].first;
			s.push_back('A');
		}else{
			sb+=v[i].second;
			s.push_back('G');
		}
	}
	if(abs(sa-sb)<=500) cout << s << endl;
	else cout << -1 << endl;
	return 0;
}