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
#define inf 			1e9+7

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
		ll A[n];
		for (ll i = 0; i < n; i++) {
			cin >> A[i];
		}
		ll mx = -inf, csum = 0, len = 0;
		ll last = A[0];
		csum += last;
		// ll last = A[0];
		bool lookPositive = false;
		if (A[0] < 0) lookPositive = true;
		for (ll i = 1; i < n; i++) {
			if ((A[i] > 0) == lookPositive) {
				last = A[i];
				csum += last;
				lookPositive = !lookPositive;
			} else {
				mx = max(last, A[i]);
				if (mx > last) {
					csum -= last;
					csum += mx;
					last = mx;
				}
			}
		}
		cout << csum << endl;
	}
	return 0;
}