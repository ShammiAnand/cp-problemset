#include<bits/stdc++.h>
using namespace std;
using ll = int;

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
	for (ll k = 1; k <= t; k++) {
		ll n; cin >> n;
		ll matrix[n][n];

		ll trace = 0;
		ll row = 0, col = 0;
		for (ll i = 0; i < n; i++) {
			ll duplicates[100] = {0};
			for (ll j = 0; j < n; j++) {
				cin >> matrix[i][j];
				if (i == j) trace += matrix[i][j];
			}
		}

		for (ll i = 0; i < n; i++) {
			ll duplicates[n] = {0};
			for (ll j = 0; j < n; j++) {
				duplicates[matrix[i][j] - 1]++;
			}
			for (ll j = 0; j < n; j++) {
				if (duplicates[j] > 1) {
					row++;
					break;
				}
			}
		}

		for (ll i = 0; i < n; i++) {
			ll duplicates[n] = {0};
			for (ll j = 0; j < n; j++) {
				duplicates[matrix[j][i] - 1]++;
			}
			for (ll j = 0; j < n; j++) {
				if (duplicates[j] > 1) {
					col++;
					break;
				}
			}
		}
		cout << "Case #" << k << ": " << trace << " " << row << " " << col << "\n";
	}
	return 0;
}