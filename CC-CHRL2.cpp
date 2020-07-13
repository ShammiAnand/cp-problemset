#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int k=0;k<t;k++){
		string s;
		cin >> s;
		std::vector<char> v;
		for(int i=0;i<s.length();i++){
			v.push_back(s[i]);
		}
		int count =0;
		for(int j=0;j<s.length()-4*count;j++){
			for(int i=0;i<s.length()-4;i++){
				if(v[i]=='C'&&v[i+1]=='H'&&v[i+2]=='E'&&v[i+3]=='F'){
					count++;
					v.erase(v.begin()+i,v.begin()+i+4);
				}
			}
		}
		for(int i=0;i<s.length()-4;i++){
			if(v[i]=='C'&&v[i+1]=='H'&&v[i+2]=='E'&&v[i+3]=='F'){
				count++;
				v.erase(v.begin()+i,v.begin()+i+4);
			}
		}

		cout << count << "\n";
	}
}