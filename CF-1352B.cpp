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

int main() {
	shammi();
	w(t) {
		ll n, k; cin >> n >> k;
		if ((n % 2 == 1 && k % 2 == 0) || k > n) {
			cout << "NO\n";
			continue;
		} else {

			if (n % k == 0) {
				cout << "YES\n";
				for (ll i = 0; i < k; i++) {
					cout << n / k << " ";
				}
				cout << nl;
			} else {
				if (n % 2 == 0) {
					if (k % 2 == 1) {
						if ((n - 2 * (k - 1)) > 0) {
							cout << "YES\n";
							for (ll i = 0; i < k - 1; i++) {
								cout << 2 << " ";
							}
							cout << n - 2 * (k - 1) << nl;
						} else cout << "NO\n";
					} else {
						cout << "YES\n";
						for (ll i = 0; i < k - 1; i++) {
							cout << 1 << " ";
						}
						cout << n - (k - 1) << nl;
					}
				} else {
					cout << "YES\n";
					for (ll i = 0; i < k - 1; i++) {
						cout << 1 << " ";
					}
					cout << n - (k - 1) << nl;
				}
			}
		}
	}
	return 0;
}