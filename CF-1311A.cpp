#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	scanf("%lld",&t);
	while(t--){
		ll a,b;
		scanf("%lld%lld",&a,&b);
		if(b-a>0){
			(b-a)%2==0 ? cout << 2 << endl : cout << 1 << endl;
		}else if(b-a<0){
			(a-b)%2==0 ? cout << 1 << endl : cout << 2 << endl;
		}else{
			cout << 0 << endl;
		}
	}
	return 0;
}