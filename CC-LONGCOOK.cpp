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

ll dayofweek(ll d, ll m, ll y) {
	static ll t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
	y -= m < 3;
	return ( y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
}

int main() {
	shammi();
	ll t; cin >> t;
	while (t--) {
		ll m1, m2, y1, y2, count = 0;
		cin >> m1 >> y1;
		cin >> m2 >> y2;
		for (ll i = y1; i <= y2; i++) {
			for (ll j = 1; j <= 12; j++) {
				if (dayofweek(1, j, i) == 0 || dayofweek(1, j, i) == 6) {
					count++;
				} else {
					continue;
				}
			}
		}
		for (ll i = 1; i < m1; i++) {
			if (dayofweek(1, i, y1) == 0 || dayofweek(1, i, y1) == 6) count--;
		}
		for (ll i = m2 + 1; i <= 12; i++) {
			if (dayofweek(1, i, y2) == 0 || dayofweek(1, i, y2) == 6) count--;
		}
		cout << count << "\n";
	}
	return 0;
}