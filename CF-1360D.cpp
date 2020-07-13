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
#define w(x)            int x; cin>>x; while(x--)

void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
int main() {
	shammi();
	w(t) {
		ll n, k; cin >> n >> k;
		// ll m = k;
		ll i;
		bool prime = true;
		// for (ll i = 1; i * i <= k; ++i) {
		// 	if (n % i == 0) {
		// 		if (i != 1)prime = false;
		// 		mn = min(mn, n / i);
		// 	} else continue;
		// }
		ll ans;
		for (i = 1; i <= k && i * i <= n; i++) {
			if ((n % i) == 0) {
				if (n / i > k) ans = n / i;
				else {
					ans = i;
					break;
				}
			}
		}
		cout << ans << nl;
	}
	return 0;
}