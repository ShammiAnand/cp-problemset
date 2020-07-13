#include<iostream>
#include<string>
using namespace std;
int digitSum(string s, int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=(int)s[i];
	}
	return sum;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		string s;
		cin >> n >> s;
		if(n<=2){
			(digitSum(s,n)%2==0&&stoi(s)%2!=0)?cout << s << endl : cout << -1 << endl;
		}else{
			if(digitSum(s,n)%2==0){
				if((int)s[n-1]%2==0){
					//remove an even digit from s until its odd
					//use .pop_back()
					while((int)s[s.length()-1]%2==0) s.pop_back();
					cout << s << endl;
				}else cout << s << endl;
			}else{
				if((int)s[n-1]%2==0){
					//2 things to be done
					//1. remove an odd number from middle
					//2. remove an even digit from last until odd
					while((int)s[s.length()-1]%2==0) s.pop_back();
					bool odd=false;
					for(int i=1;i<s.length()-1;i++){
						if((int)s[i]%2!=0){
							s.erase(s.begin()+i);
							odd=true;
							break;
						}
					}
					(odd)? cout << s << endl : cout << "-1\n";
				}else{
					bool odd1=false;
					for(int i=1;i<s.length()-1;i++){
						if((int)s[i]%2!=0){
							s.erase(s.begin()+i);
							odd1=true;
							break;
						}
					}
					(odd1)? cout << s << endl : cout << "-1\n";
				}
			}
		}
	}
	return 0;
}