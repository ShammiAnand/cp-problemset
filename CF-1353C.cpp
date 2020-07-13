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
		ll n; cin >> n;
		//since the size is odd, there will always be a centre!
		// there are 8 directions of movement from the centre for half of the board
		// formula is 8 * sum of sqaures in each direction
		cout << 8 * ((n / 2) * ((n / 2) + 1) * (2 * (n / 2) + 1) / 6) << nl;
	}
	return 0;
}