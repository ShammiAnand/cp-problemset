#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define mod 1000000007

void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

ll gcd(ll a, ll b) {

	if (a == 0) return b;
	return gcd(b % a, a);

}

int main() {
	shammi();
	ll t; cin >> t;
	while (t--) {
		ll n, q;
		cin >> n >> q;
		ll A[n + 1];
		ll prefix[n + 1], suffix[n + 1];
		for (ll i = 1; i <= n; i++) cin >> A[i];
		for (ll i = 1; i <= n; i++) {
			if (i == 1) {
				prefix[i] = A[i];
			} else {
				prefix[i] = gcd(A[i], prefix[i - 1]);
			}
		}
		for (ll i = n ; i >= 1; i--) {
			if (i == n ) {
				suffix[i] = A[i];
			} else {
				suffix[i] = gcd(A[i], suffix[i + 1]);
			}
		}
		for (ll i = 0; i < q; i++) {
			ll l, r, ans;
			cin >> l >> r;
			if (l > 1 && r < n) {
				ans = gcd(prefix[l - 1], suffix[r + 1]);
			}
			if (l == 1 && r == n) {
				ans = prefix[r];
			}
			if (l == 1 && r < n) {
				ans = suffix[r + 1];
			}
			if (l > 1 && r == n) {
				ans = prefix[l - 1];
			}
			cout << ans << endl;
		}
	}
	return 0;
}