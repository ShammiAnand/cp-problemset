#include<iostream>
#include<string>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int k=0;k<t;k++){
		int n;
		cin >> n;
		string team[100000];
		for(int i=0;i<n;i++){
			cin >> team[i];
		}
		string A = team[0],B;
		int nA=0,nB=0;
		for(int i=0;i<n;i++){
			if(team[i]==A) nA++;
			else B=team[i];
		}
		nB = n-nA;
		if(nA==nB) cout << "Draw\n";
		else
		(nA>nB)?(cout << A <<"\n"):(cout << B <<"\n");
	}
	return 0;

}