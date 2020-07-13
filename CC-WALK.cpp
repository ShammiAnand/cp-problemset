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
		ll W[n];
		for (ll i = 0; i < n; i++) {
			cin >> W[i];
		}
		ll mx = W[0];
		for (ll i = 0; i < n; i++) {
			if (W[i] > (mx - i)) {
				mx += (W[i] - (mx - i));
			}
		}
		cout << mx << nl;
	}
	return 0;
}