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
#define p             1000000007
#define nl              "\n"
#define w(x)            int x; cin>>x; while(x--)

void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


ll power(ll y) {
	ll res = 1;
	ll x = 2;
	x = x % p;
	if (x == 0) return 0;
	while (y > 0) {
		if (y & 1) res = ((res % p) * x) % p;
		y = y >> 1;
		x = (x * x) % p;
	}
	return res;
}


int main() {
	shammi();
	w(t) {
		ll n; cin >> n;
		ll freq[n + 1] = {0};
		ll Val[n + 1] = {0};
		ll A[n];
		for (ll i = 0; i < n; i++) {
			cin >> A[i];
			if (freq[A[i]] > 0) {
				freq[A[i]]++;
			} else {
				Val[A[i]] = (power(n - A[i])) % p;
				freq[A[i]]++;
			}
		}
		// for (ll i = 1; i <= n; i++) {
		// 	cout << (power((n - i))) % p << " ";
		// }
		// cout << nl;
		ll curr_sum = 0;
		for (int i = 1; i <= n; i++) {
			if (freq[i] == 0) {
				cout << 0 << " ";
				curr_sum += (power(n - i)) % p;
				curr_sum %= p;
			} else {
				cout << ((power((n - i)) % p) + curr_sum) % p << " ";
				curr_sum = 0;
			}
		}
		cout << nl;
	}
	return 0;
}