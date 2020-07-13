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
bool check(ll arr[]) {
	if (arr[0] == 1 && arr[1] == 1 && arr[2] == 1) return true;
	else return false;
}
int main() {
	shammi();
	w(t) {
		string s; cin >> s;
		ll count = 0, mn = 1000000;
		bool first = true;
		ll iter = 0;
		for (ll i = 0; i < s.length(); i++) {
			ll present[3] = {0};
			for (ll j = i; j < s.length(); j++) {
				count++;
				iter++;
				present[s[j] - '1'] = 1;
				if (check(present)) {
					// cout << "Length of current sub-seq = " << count << nl;
					break;
				}
			}
			if (first && !check(present)) {
				first = false;
				break;
			}
			if (check(present)) mn = min(mn, count);
			count = 0;
			if (mn == 3) break;
		}
		if (mn == 1000000) cout << 0 << nl;
		else cout << mn << nl;
		// cout << "Number of Iterations : " << iter << nl;
	}
	return 0;
}