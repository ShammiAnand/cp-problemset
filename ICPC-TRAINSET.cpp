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
		ll n; cin >> n;
		// string words[n];
		// ll check[n];
		map <string, pair<ll, ll>> words;
		for (ll i = 0; i < n; i++) {
			string w; ll check;
			cin >> w >> check;
			if (check == 0) {
				words[w].first++;
			} else words[w].second++;
		}
		ll total = 0;
		// O(N^2)
		// for (ll i = 0; i < n; i++) {
		// 	ll pos = 0, neg = 0;
		// 	for (ll j = 0; j < n; j++) {
		// 		if (words[i] == words[j]) {
		// 			if (check[j] == 0) neg++;
		// 			else if (check[j] == 1) pos++;
		// 			else if (check[j] == -1) break;
		// 			check[j] = -1;
		// 		}
		// 	}
		// 	total += max(neg, pos);
		// }
		for (auto c : words) {
			total += max(c.second.first, c.second.second);
		}
		cout << total << endl;
	}
	return 0;
}