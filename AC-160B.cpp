#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll x,h=0;
	scanf("%lld",&x);
	if(x>=500){
		h += (x/500)*1000;
		x = x%500;
	}
	if(x>=5){
		h += (x/5)*5;
		x = x%5;
	}
	printf("%lld\n",h);
	return 0;
}