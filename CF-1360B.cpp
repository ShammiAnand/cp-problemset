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
		int n; cin >> n;
		int strength[n];
		for (int i = 0; i < n; i++) cin >> strength[i];
		int mn = 1000;
		sort(strength, strength + n);
		bool db = false;
		for (int i = 0; i < n - 1; i++) {
			mn = min(mn, strength[i + 1] - strength[i]);
			if (strength[i] == strength[i + 1]) {
				db = true;
			}
		}
		if (db) {
			cout << 0 << nl;
		} else cout << mn << nl;
	}
	return 0;
}