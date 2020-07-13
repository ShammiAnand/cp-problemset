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
		ll freq[26] = {0};
		ll n, q; cin >> n >> q;
		string S; cin >> S;
		for ( ll i = 0; i < n; i++) freq[S[i] - 'a']++;
		while (q--) {
			ll c, count = 0; cin >> c;
			for (ll i = 0; i < 26; i++) {
				if (freq[i] > c) count += freq[i] - c;
			}
			cout << count << nl;
		}
	}
	return 0;
}