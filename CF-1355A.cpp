#include<bits/stdc++.h>
using namespace std;

#define ll             	long long
#define pb              push_back
#define mp              make_pair
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define nl				"\n"
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(x)            ll x; cin>>x; while(x--)

void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
ll add(ll n) {
	ll mx = 0, mn = 10;
	while (n > 0) {
		ll digit = n % 10;
		n /= 10;
		mx = max(mx, digit);
		mn = min(mn, digit);
	}
	return mx * mn;
}

int main() {
	shammi();
	w(t) {
		ll a, k; cin >> a >> k;
		k--;
		while (k--) {
			ll x = add(a);
			if (x == 0) break;
			a += x;
		}
		cout << a << "\n";
	}
	return 0;
}