//Accepted ---- AC
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
}

void input() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
ll smallestDivisor(ll n) {
	if (n % 2 == 0) return 2;

	for (ll i = 3; i * i <= n; i += 2) {
		if (n % i == 0) return i;
	}
	return n;
}

int main() {
	// input();
	shammi();
	w(t) {
		ll n, k; cin >> n >> k;
		if (n % 2 == 0) {
			cout << n + 2 * k << nl;
		} else {
			while (k-- && n % 2 != 0) {
				n += smallestDivisor(n);
			}
			cout << n + 2 * (k + 1) << nl;
		}
	}
	return 0;
}