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
		if (n > 2) {
			cout << n / 2 << "\n";
			cout << 3 << " " << 1 << " ";
			for (ll i = 2; i <= n; i += 2) {
				if (i == 2) cout << i << " " << i + 1 << "\n";
				else {
					ll count = 2;
					if ((i + 1) > n) {
						cout << count - 1 << " " << i << "\n";
					} else {
						cout << count << " " << i << " " << i + 1 << "\n";
					}
				}
			}
		} else {
			if (n == 1) {
				cout << 1 << "\n";
				cout << 1 << " " << 1 << "\n";
			} else {
				cout << 1 << "\n";
				cout << 2 << " " << 1 << " " << 2 << "\n";
			}
		}
	}
	return 0;
}