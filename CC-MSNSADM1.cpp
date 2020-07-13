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
		ll A[n], B[n];
		for (ll i = 0; i < n; i++) cin >> A[i];
		for (ll i = 0; i < n; i++) cin >> B[i];
		ll mx = 0;
		for (ll i = 0; i < n; i++) {
			mx = max(mx, 20 * A[i] - 10 * B[i]);
		}
		cout << mx << endl;
	}
	return 0;
}