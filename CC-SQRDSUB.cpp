#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define MAX 100002

void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
ll solve(ll* arr, ll n) {

	ll ans = 0;
	ll strt1 = 0;
	for (ll i = 0; i < n; i++) {
		if (arr[i] % 2 != 0) {
			ans += i - strt1 + 1;
		}
		else {
			strt1 = i + 1;
		}
	}
	ll strt = 0, prev_strt = 0, c = 0 ;

	bool flag = true;
	for (ll i = 0; i < n; i++) {
		if (arr[i] % 2 == 0 && arr[i] % 4 != 0) {
			if (c == 0) {
				c++;
				strt = i;
				prev_strt = i;
			}
			else {
				if (c == 1) {
					if (flag) {
						ans += (prev_strt + 1) * (n - i);
						strt = i;
						flag = false;
						c = 1;
					}
					else {
						ans += ((strt - prev_strt) * (n - i));
						prev_strt = strt;
						strt = i;
						c = 1;
					}
				}
				else if (c == 2) {
					c = 1;
					strt = i;
				}
			}
		}
		else if (arr[i] % 4 == 0) {
			if (c == 0 || c == 2) {
				if (flag) {
					strt = i ;
					ans += (i + 1) * (n - i);
					c = 2;
					flag = false;
					prev_strt = i;
				}
				else {
					ans += (i - strt ) * (n - i);
					strt = i;
					prev_strt = strt;
					c = 2;
				}
			}
			else if (c == 1) {
				if (flag) {
					ans +=  (i + 1) * (n - i);
					strt = i ;
					prev_strt = strt;
					c = 2;
					flag = false;

				}
				else {
					ans += (i - prev_strt) * (n - i);
					c = 2;
					strt = i;
					prev_strt = strt;
				}
			}
		}
	}
	return ans;
}
int main() {
	shammi();
	ll t; cin >> t;
	while (t--) {
		ll n; cin >> n;
		ll A[n];
		for (ll i = 0; i < n; i++) cin >> A[i];
		ll count = solve(A, n);

		cout << count << "\n";
	}
	return 0;
}