#include<bits/stdc++.h>
using namespace std;

#define ll             long long
#define ff				first
#define ss				second
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
		ll n, m; cin >> n >> m;
		ll P[n];
		for (ll i = 0; i < n; i++) cin >> P[i];

		vector<pair<ll, ll>> M;

		for (ll i = 0; i < m; i++) {
			ll x, y; cin >> x >> y;
			M.push_back(make_pair(x, y));
		}
		for (ll j = 0; j < 1000; j++) {
			bool noSwap = true;
			for (ll i = 0; i < m; i++) {
				if (P[min(M[i].ff, M[i].ss) - 1] > P[max(M[i].ff, M[i].ss) - 1]) {
					noSwap = false;
					ll temp = P[min(M[i].ff, M[i].ss) - 1];
					P[min(M[i].ff, M[i].ss) - 1] = P[max(M[i].ff, M[i].ss) - 1];
					P[max(M[i].ff, M[i].ss) - 1] = temp;
				}
			}
			if (noSwap) break;
		}

		pair<ll, ll> arrPos[n];
		for (ll i = 0; i < n; i++) {
			arrPos[i].first = P[i];
			arrPos[i].second = i;
		}
		sort(arrPos, arrPos + n);
		vector<bool> vis(n, false);
		vector < pair <ll, ll> > swapping;
		ll ans = 0, current_size = 0;
		bool removed = false;
		for (ll i = 0; i < n; i++) {
			if (vis[i] || arrPos[i].second == i)
				continue;
			removed = false;
			ll cycle_size = 0;
			ll j = i;
			current_size = 0;
			while (!vis[j]) {
				vis[j] = 1;
				swapping.pb(mp(j, arrPos[j].second));
				j = arrPos[j].second;
				removed = true;
				current_size++;
				cycle_size++;
			}
			// cout << "Size of pairs : " << current_size << nl;
			if (removed) swapping.erase(swapping.begin() + swapping.size()); //check this!
			// cout << "current size : " << swapping.size() << nl;
			if (cycle_size > 0) {
				ans += (cycle_size - 1);
			}
		}
		// find the required pair:
		ll same = 0;
		for (ll i = 0; i < swapping.size(); i++) {
			ll x = swapping[i].ff, y = swapping[i].ss;
			for (ll j = 0; j < M.size(); j++) {
				if (M[j].ff == (x + 1) || M[j].ff == (y + 1)) {
					if (M[j].ss == (x + 1) || M[j].ss == (y + 1)) {
						same++;
					}
				}
			}
		}
		cout << ans - same << nl;

		for (ll i = 0; i < swapping.size(); i++) {
			cout << swapping[i].ff + 1 << " " << swapping[i].ss + 1 << nl;
		}
	}
	return 0;
}