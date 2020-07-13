#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int k=0;k<t;k++){
		string s;
		cin >> s;
		int a[26];
		for (int i=0;i<26;i++){
			a[i]=-1;
		}
		for(int i=0;i<s.length();i++){
			if(a[s[i]-'a']==-1) a[s[i]-'a']=1;
			else a[s[i]-'a']++;
		}
		int tens=0;
		int sum =1;
		vector<int> v;
		for(int i=0;i<s.length();i++){
			if(s[i]==s[i+1]){
				sum++;
			}else{
				v.push_back(sum);
				sum=1;
			}
		}
		for(int i=0;i<v.size();i++){
			if(v[i]>9){
				tens++;
			}
		}

		int comLen = v.size()*2 + tens;

		if(comLen < s.length()){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}

	}
	return 0;
}