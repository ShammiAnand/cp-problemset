//#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){

	int t;
	cin >> t;
	for(int k=0;k<t;k++){
		string A,B,C;
		cin >> A;
		cin >> B;
		C ="";
		int len = max(A.length(),B.length())-min(A.length(),B.length());
		int ans =0;
		int mx=-1;

		if(B.length()==1&&B[0]=='0'){
			cout << 0 << "\n";

		}else{

			//a new string that'll contain zeroes upto diff
			for(int i=0;i<len;i++){
				C += "0";
			}
			//concatenate the string to the least of two
			if(A.length()<B.length()){
				A = C+A;
			}else{
				B = C+B;
			}

			for(int i=0;i<A.length();i++){
				if(A[i]=='1'&&B[i]=='1'){
					mx = max(mx,ans);
					ans=0;
				}
				if(A[i]=='1'&&B[i]=='0'){
					ans++;
				}
				if(A[i]=='0'&&B[i]=='1'){
					ans++;
				}
			}
			cout << mx+2 << "\n";
		}

	}
	return 0;
}
