#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n;
		string s,s1;
		cin >> s;
		s1=s;
		vector< pair <string,int> > v;
		for(int j=0;j<n;j++){
			k=j;
			s1=s;
			for(int i=0;i<(n-k+1);i++){
				reverse(s1.begin()+i,s1.begin()+(i+k));
				v.push_back(make_pair(s1,k+1));
			}
		}
		sort(v.begin(), v.end());
		cout << v[0].first << "\n" << v[0].second << "\n";
	}
	return 0;
}