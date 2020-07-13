#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,count=0;
		cin >> n;
		string x,a="1",b="1";
		cin >> x;
		for(int i=1;i<n;i++){
			if(x[i]=='0'){
				a.push_back('0');
				b.push_back('0');
			}else if(x[i]=='1'){
				if(count<=1){
					a.push_back('0');
					b.push_back('1');
					count++;
				}else{
					a.push_back('1');
					b.push_back('0');
				}
			}else{
				if(count==1){
					a.push_back('2');
					b.push_back('0');
					count++;
				}else{
					a.push_back('1');
					b.push_back('1');
				}	
			}
		}
		cout << a << "\n" << b << "\n";
	}
	return 0;
}