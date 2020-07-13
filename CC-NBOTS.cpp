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
		ll n, f; cin >> n >> f;
		ll virus[n][n];
		for (ll i = 0; i < n; i++) {
			for (ll j = 0; j < n; j++) {
				cin >> virus[i][j];
			}
		}
		ll k; cin >> k; // minimum no. of shots fired (V,H);
		vector < pair < char, ll> > shots; //for storing shots;

		// find s < k and print the steps:

	}
	return 0;
}