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
ll ceiling(ll m, ll n) {
	return (m % n == 0) ? m / n : (m / n) + 1;
}
int main() {
	shammi();
	w(t) {
		ll n, m; cin >> n >> m;
		if (n == 1) {
			cout << 0 << nl;
			continue;
		}
		if (n == 2) {
			cout << m << nl;
			continue;
		}
		cout << (2 * m) << nl;

	}
	return 0;
}