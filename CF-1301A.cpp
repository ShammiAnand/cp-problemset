#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string a,b,c;
		cin >> a >> b >> c;
		int l = a.length();
		for(int i=0;i<l;i++){
			char temp;
			if(c[i]==b[i]){
				temp=a[i];
				a[i]=c[i];
				c[i]=temp;
			}else if(c[i]==a[i]){
				temp=b[i];
				b[i]=c[i];
				c[i]=temp;
			}else{
				temp=a[i];
				a[i]=c[i];
				c[i]=temp;
			}
		}
		if(a==b) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}