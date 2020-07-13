#include<bits/stdc++.h>
using namespace std;

#define ll             long long
#define pb              push_back
#define mp              make_pair
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(x)            int x; cin>>x; while(x--)

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
		ll n, s; cin >> n >> s;
		ll P[n];
		for (ll i = 0; i < n; i++) {
			cin >> P[i];
		}
		vector <ll> forward, defender;
		for (ll i = 0; i < n; i++) {
			ll check; cin >> check;
			if (check == 0) {
				defender.pb(P[i]);
			} else {
				forward.pb(P[i]);
			}
		}
		if (forward.size() == 0 || defender.size() == 0) {
			cout << "no\n";
			continue;
		}
		sort(forward.begin(), forward.end());
		sort(defender.begin(), defender.end());
		if ((forward[0] + defender[0]) > (100 - s)) cout << "no\n";
		else cout << "yes\n";
	}
	return 0;
}