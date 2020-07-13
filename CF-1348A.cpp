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
	vector <ll> coins;
	for (ll i = 1; i <= 30; i++) coins.push_back(pow(2, i));
	w(t) {
		ll n; cin >> n;
		ll A = 0, B = 0;
		A += coins[n - 1];
		for (ll i = 0; i < n / 2 - 1; i++) A += coins[i];
		for (ll i = n / 2 - 1; i < n - 1; i++) B += coins[i];

		cout << abs(A - B) << nl;
	}
	return 0;
}