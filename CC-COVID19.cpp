#include<bits/stdc++.h>
using namespace std;

#define ll             long long
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
		ll n; cin >> n;
		ll X[n];
		for (ll i = 0; i < n; i++) {
			cin >> X[i];
		}
		ll max_inf = 1, min_inf = 10;
		for (ll i = 0; i < n; i++) {
			ll count = 1;
			for (ll j = i; j < n - 1; j++) {
				if ((X[j + 1] - X[j]) <= 2) {
					count ++;
				} else break;
			}
			for (ll j = i; j > 0; j--) {
				if ((X[j] - X[j - 1]) <= 2) {
					count++;
				} else break;
			}
			max_inf = max(count, max_inf);
			min_inf = min(count , min_inf);
		}
		cout << min_inf << " " << max_inf << nl;
	}
	return 0;
}