//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define Max(a,b,c)      max(a,max(b,c))
#define Min(a,b,c)      min(a,min(b,c))
#define pb              push_back
#define mp              make_pair
#define f               first
#define s               second
#define mod             1000000007
#define nl              "\n"
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
		ll n, x; cin >> n >> x;
		ll a[n];
		for (int i = 0; i < n; i++) cin >> a[i];

		ll days = 0, infected = 0;
		sort(a, a + n);
		// reverse(a, a + n);
		for (int i = 0; i < n; i++) {
			infected = a[i];
			// cout << "infected : " << infected << nl;
			// cout << "cures : " << x << nl;
			if (infected > x) {
				infected -= x;
				x += x;
				++days;


				// cout << "infected : " << infected << nl;
				// cout << "cures : " << x << nl;

				while (infected > 0) {

					if (2 * infected <= a[i]) infected *= 2;
					else infected = a[i];

					// cout << "infected : " << infected << nl;
					// cout << "cures : " << x << nl;

					// ll curr_inf = infected;
					if (infected > x) {
						infected -= x;
						x += x;
					}
					else {
						x = max(x, 2 * a[i]);
						infected = 0;
					}
					days++;
				}
			} else {
				// cout << "infected : " << infected << nl;
				// cout << "cures : " << x << nl;
				// a[i] = 0;
				// x += a[i];
				x = max(x, 2 * a[i]);

				days++;
			}
		}
		cout << days << nl;
	}
	return 0;
}