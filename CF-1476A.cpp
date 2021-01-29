/*
@author: Shammi Anand
@contact: shammianand101@gmail.com
@website: shammianand.live
@problem:
*/

#include <bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define f               first
#define s               second
#define vi              vector<int>
#define pii             pair<int, int>
#define F(i,n)          for(int i=0;i<n;i++)
#define all(a)          a.begin(), a.end()
#define INF             1e9+7
#define nl              "\n"
#define w(x)            int x; cin>>x; while(x--)

template<typename T_vector>
void output(const T_vector &v, int start = -1, int end = -1) {
	if (start < 0) start = 0;
	if (end < 0) end = int(v.size());

	for (int i = start; i < end; i++) {
		cout << v[i] << (i < end - 1 ? ' ' : '\n');
	}
}

// most significant set bit : leftmost
ll clz(ll N) {
	return N ? 32 - __builtin_clzll(N) : -INF;
}

void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

ll ceil(ll a, ll b) {
	return (a % b ? ((a / b) + 1) : (a / b));
}

int main() {
	shammi();
	w(t) {
		ll n, k; cin >> n >> k;
		if (n == k) cout << 1 << nl;
		else if (n > k) {
			if (n % k == 0) cout << 1 << nl;
			else cout << 2 << nl;
		} else {
			if (k % n == 0) cout << k / n << nl;
			else cout << (k / n) + 1 << nl;
		}
		// if (n <= k) cout << (k / n) + ceil(k % n, n) << nl;
		// else {
		// 	while (n > k) {
		// 		k += k;
		// 	}
		// 	cout << (k / n) + ceil(k % n, n) << nl;
		// }
	}
	return 0;
}