#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int lc=0,rc=0;
	for(int i=0;i<n;i++){
		if(s[i]=='L') lc++;
		else rc++;
	}
	cout << lc+rc+1 << "\n";
	return 0;
}