#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	int t,n;
	string s,sc;
	cin >> t;
	while(t--){
		vector<int> v;
		cin >> n >> s;
		int count=0;
		for(int i=0;i<n;i++){
			for(int j=1;j<n;j++){
				if(s[j]=='P'&&s[j-1]=='A'){
					v.push_back(i);
				}
			}
			for(int k=0;k<v.size();k++){
				s[v[k]]='A';
			}
			if(v.size()!=0) count++;
			v.clear();
		}
		cout << count << endl << s << endl;
	}
	return 0;
}