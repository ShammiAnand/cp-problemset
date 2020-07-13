#include<iostream>
using namespace std;
#define ll long long

ll ceiling(ll a, ll b){
	if(a%b==0) return a/b;
	else return (a/b)+1;
}

int main(){
	int t;
	cin >> t;
	for(int k=0;k<t;k++){
		bool possible = false;
		ll n,d;
		cin >> n >> d;
		if(n>=d) possible=true;
		else{
			ll x;
			for(x=1;x<=d/2;x++){
				if(n >= x+ceiling(d,x+1)) possible=true;
			}
		}

		(possible)?cout << "YES\n": cout << "NO\n";
	}

	return 0;
}