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
		ll n; cin >> n;
		ll copy = n;
		vector <ll> digits;
		bool round = true;
		ll count = 0;
		while (copy > 0) {
			digits.pb(copy % 10);
			if (copy % 10 != 0) count++;
			// if (copy > 10 && (copy % 10) != 0) round = false;
			copy = copy / 10;
		}
		// if (round) cout << 1 << nl << n << nl;
		// else {
		cout << count << nl;
		for (ll i = 0; i < digits.size(); i++) {
			if (digits[i]*pow(10, i) == 0) continue;
			else cout << digits[i]*pow(10, i) << " ";
		}
		cout << nl;
		// }
	}
	return 0;
}