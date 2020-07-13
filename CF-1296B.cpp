#include <iostream>
using namespace std;
#define ll long long

ll length(ll n){
	ll count=0;
	while(n>0){
		count++;
		n=n/10;
	}
	return count;
}

ll powerofTen(ll n){
	ll prod=1;
	for(int i=0;i<n-1;i++){
		prod*=10;
	}
	return prod;
}


int main(){

	ll k;
	cin >> k;

	while(k--){

		ll s,spent=0,cashback=0,rem=0,len=0;
		cin >> s;

		rem = s;
		len = length(s);

		if(s<10) cout << s << "\n";
		else{
			spent = powerofTen(len);
			while(len>1){
				cashback += spent/10;
				rem = rem-(spent-spent/10);
				if(rem<spent){
					len--;
					spent = powerofTen(len);
				}
			}
			cout << s+cashback << '\n';
		}	
	}
	return 0;
}