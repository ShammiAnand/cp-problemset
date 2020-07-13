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
		ll n; cin >> n;
		ll A[n];
		for (ll i = 0; i < n; i++) cin >> A[i];
		ll count = 0, counter = 0;
		bool first = false;
		bool isPossible = true;

		for (ll i = 0; i < n; i++) {
			if (A[i] == 0 && first) {
				count++;
			}
			if (A[i] == 1) {
				if (first) {
					if (count < 5) {
						isPossible = false;
						break;
					}
				}
				first = true;
				count = 0;
			}
		}

		if (isPossible) cout << "YES\n";
		else cout << "NO\n";

	}
	return 0;
}