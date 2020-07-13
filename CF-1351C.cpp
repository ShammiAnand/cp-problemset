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
		string s; cin >> s;
		ll score = 0;
		ll x = 0, y = 0, dx = 0, dy = 0;
		set < pair <ll, ll> > seg;

		for (ll i = 0; i < s.length(); i++) {
			x = dx; y = dy;
			if (s[i] == 'N') dy++;
			else if (s[i] == 'S') dy--;
			else if (s[i] == 'E') dx++;
			else if (s[i] == 'W') dx--;

			if (!seg.count({x + dx, y + dy})) {
				score += 5;
				seg.insert({x + dx, y + dy});
			} else score++;

		}
		cout << score << nl;
	}
	return 0;
}