#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;



int main(){
	int t;
	cin >> t;
	for(int p=0;p<t;p++){
		int n;
		string s;
		cin >> n;
		cin >> s;

		int a[26];
		for (int i = 0; i < 26; i++)
		{
			a[i]=-1;
		}
		
		int diff=n;

		for(int i=0;i<n;i++){
			if(a[s[i]-'a']==-1){
				a[s[i]-'a']=i;
			}else{
				diff = min(diff,abs(a[s[i]-'a']-i));
				a[s[i]-'a']=i;
			}
		}
		
		cout << (n-diff) << "\n";	
	}
	return 0;
}