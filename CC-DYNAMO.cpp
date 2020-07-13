#include<iostream>
using namespace std;

unsigned long long tenPower(unsigned long long n){
	unsigned long long power = 1;
	for(int i=0;i<n;i++){
		power = power*10;
	}
	return power;
}
int main(){
	int t;
	cin >> t;
	for(int k=0;k<t;k++){

		unsigned long long n,s,a,b,c,d,e;
		int res;
		cin >> n >> a;

		s = 2*tenPower(n)+(a-2);
		cout << s << "\n";
		fflush(stdout);

		cin >> b;
		(b==(tenPower(n)-1))?c=1:c= tenPower(n)-1-b;
		cout << c << "\n";
		fflush(stdout);

		cin >> d;
		(d==(tenPower(n)-1))?e=1:e= tenPower(n)-1-d;
		cout << e << "\n";
		fflush(stdout);

		cin >> res;
		if(res==-1||s!=(a+b+c+d+e)) break;
		
	}
	return 0;
}