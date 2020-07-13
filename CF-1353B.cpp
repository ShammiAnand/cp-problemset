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
ll ceiling(ll m, ll n) {
	return (m % n == 0) ? m / n : (m / n) + 1;
}
int main() {
	shammi();
	w(t) {
		ll n, k; cin >> n >> k;
		ll A[n], B[n];
		for (ll i = 0; i < n; i++) cin >> A[i];
		for (ll i = 0; i < n; i++) cin >> B[i];
		sort(A, A + n);
		sort(B, B + n, greater<ll>());
		ll sum = 0;
		// for (ll i = 0; i < n; i++) cout << A[i] << " ";
		// cout << nl;
		// for (ll i = 0; i < n; i++) cout << A[i] << " ";
		// cout << nl;
		for (ll i = 0; i < n; i++) {
			if (A[i] < B[i] && k > 0) {
				sum += B[i];
				k--;
				continue;
			}
			sum += A[i];
		}
		cout << sum << nl;

	}
	return 0;
}