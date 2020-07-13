//stl demo

#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>

using namespace std;
void vectorDemo(){
	int n,k;
	vector<int> v;
	cin >> n;
	for(int i=0;i<n;i++){
		k=0;
		cin >> k;
		v.push_back(k);
	}
	cout << "\n";
	vector<int>::iterator it;
	// for(it=v.begin();it!=v.end();it++){
	// 	cout << *it << " ";
	// }
	for(int x:v){
		cout << x << " ";
	}
	cout << "\n";

	sort(v.begin(), v.end());
	// for(it=v.begin();it!=v.end();it++){
	// 	cout << *it << " ";
	// }
	for(int x:v){
		cout << x << " ";
	}
	
	cout << "\n";

}

void setDemo(){

	set<int> s;
	int n,k;
	cin >> n;
	for(int i=0;i<n;i++){
		k=0;
		cin >> k;
		s.insert(k);
	}
	for(int x:s){
		cout << x << " ";
	}
}

void mapDemo(){

	map<char,int> m;
	string s;
	cin >> s;
	for(char c:s){
		m[c]++;
	}
	cout << m['a'] << " " << m['b'];

}

int main(){

	// setDemo();
	mapDemo();

	return 0;
}