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

ll maxindex(ll arr[], ll n) {
	ll index, mx = 0;
	for (ll i = 0; i < n; i++) {
		if (mx <= arr[i]) {
			index = i + 1;
			mx = arr[i];
		}
	}
	return index;
}

int main() {
	shammi();
	ll t; cin >> t;
	while (t--) {
		ll n, m, k; cin >> n >> m >> k;
		ll mx = 0;
		ll p;
		// ll freq[n][k] = {0};
		ll mxscore[n] = {0};
		for (ll i = 0; i < n; i++) {
			ll freq[9] = {0};
			for (ll j = 0; j < k; j++) {
				cin >> p;
				// freq[i][C[i][j] - 1]++;
				freq[p - 1]++;
			}
			mxscore[i] = maxindex(freq, 9);
		}

		for (ll i = 0; i < n; i++) cout << mxscore[i] << " ";
		cout << "\n";
	}
	return 0;
}