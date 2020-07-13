#include<iostream>
using namespace std;
int main() {
	int n,m,k,s;
	cin >> m >> n >> k >> s;
	char point[1000][1000];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> point[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(s<k) break;
			if(point[i][j] == '.') s=s-2;
			else if(point[i][j] =='*') s=s+5;
			else break;
			if(j!=n-1) s--;
		}
	}
	if(s<k) cout << "No\n";
	else cout << "Yes\n" << s;
	return 0;
}