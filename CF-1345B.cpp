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
	ll cards[100001] = {0};
	for (ll i = 1; i <= 100000; i++) {
		cards[i] = (i * (3 * i + 1)) / 2;
	}
	// 2 7 15 16 ....
	w(t) {
		ll n; cin >> n;
		ll h = 0, rem, tri = 0;
		if (n > 1) {
			bool done = false;
			for (ll i = 1; i <= 100000; i++) {
				if (cards[i] > n) {
					done = true;
					h += (n / cards[i - 1]);
					// tri += (h * (h + 1)) / 2; // answer
					rem = n % cards[i - 1];
					ll j = 1;
					while (rem > 1) {
						if (cards[j] > rem) {
							h += rem / cards[j - 1];
							// tri += (h * (h + 1)) / 2;
							rem = rem % cards[j - 1];
							j = 1;
							continue;
						} else j++;
					}
					break;
				} else continue;
				// if (done) break;
			}
			cout << h << nl;
		} else cout << 0 << nl;
	}
	return 0;
}