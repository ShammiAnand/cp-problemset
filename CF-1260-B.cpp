#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	int t;
	long long int  a, b;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> a >> b;
		if(((a+b)-3*abs(a-b))==0){
				cout<< "YES" <<"\n";
		}else{
			if(((a+b)-3*abs(a-b))==a||((a+b)-3*abs(a-b))==b){
				if(abs(a-b)==a/b||abs(a-b)==b/a){
					cout << "NO" << "\n";
				}else{
					cout<< "YES" <<"\n";
				}
			}else{
				cout << "NO" << "\n";
			}
		}
	}
	return 0;
}

//still stuck on cases like 3,3