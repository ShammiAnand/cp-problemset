//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define mp              make_pair
#define f               first
#define s               second
#define mod             1000000007
#define INF18           1e18+1
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
		ll a, b, x, y, n; cin >> a >> b >> x >> y >> n;
		if ((a - x) + (b - y) <= n) {
			cout << x*y << nl;
			continue;
		} else {
			ll ans = INF18;
			if ((a - x) <= n) {
				ans = min(x * (b - (n - (a - x))), ans);
			} else {
				// if ((b - y) <= (n - (a - x))) {
				// 	ans = min(ans, x * y);
				// } else {
				// 	ans = min(ans, x * (b - (n - (a - x))));
				// }
				ans = min(ans, (a - n) * b);
			}
			if ((b - y) <= n) {
				ans = min(ans, y * (a - (n - (b - y))));
			} else {
				// if ((a - x) <= (n - (b - y))) {
				// 	ans = min(ans, x * y);
				// } else {
				// 	ans = min(ans, y * (a - (n - (b - y))));
				// }
				ans = min(ans, (b - n) * a);
			}
			// if ((a - x) >= n) {
			// 	ans = min()
			// }
			cout << ans << nl;
		}
	}
	return 0;
}