#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll t;
	scanf("%lld",&t);
	while(t--){
		bool possible = true;
		ll a,b,c,d,x,x1,x2,y,y1,y2;
		scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
		scanf("%lld%lld%lld%lld%lld%lld",&x,&y,&x1,&y1,&x2,&y2);
		if(((x+(b-a)) >= x1 && (x+(b-a)) <= x2) && ((y+(d-c)) >=y1 && (y+(d-c)) <= y2)){
			if((x==x1&&x==x2&&b>0&&a>0)||(y==y1&&y==y2&&c>0&&d>0)) possible = false;
			else possible = true;
		}
		else possible = false;

		if(possible) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}