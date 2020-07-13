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

int main() {
	shammi();
	ll t; cin >> t;
	while (t--) {
		ll n, sum = 0; cin >> n;
		ll P[n];
		for (ll i = 0; i < n; i++) cin >> P[i];
		sort(P, P + n);
		for (ll i = n - 1; i >= 0; i--) {
			if ((P[i] - (n - i - 1)) >= 0) {
				sum += (P[i] - (n - i - 1));
				sum = sum % mod;
			}
		}
		cout << sum % mod << "\n";
	}
	return 0;
}