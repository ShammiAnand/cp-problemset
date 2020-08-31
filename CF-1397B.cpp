//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define mp              make_pair
#define f               first
#define s               second
#define mod             1000000007
#define INF             1e9+7
#define nl              "\n"
#define w(x)            int x; cin>>x; while(x--)


void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

ll power(ll x, ll y) {
	ll res = 1;

	while (y > 0) {
		if (y & 1)
			res = res * x;

		y = y >> 1;
		x = x * x;
	}
	return res;
}

int main() {
	shammi();
	ll n; cin >> n;
	ll A[n];
	ll ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	sort(A, A + n);
	ll p = 100;
	for (int i = 0; i < n; i++) {
		ans +=	abs(A[i] - power(p, i));
	}
	cout <<  ans << nl;
	return 0;
}