/*
@author: Shammi Anand
@contact: shammianand101@gmail.com
@website: shammianand.live
@problem: https://codeforces.com/problemset/problem/978/C
*/

#include <bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define f               first
#define s               second
#define vi              vector<ll>
#define pii             pair<int, int>
#define F(i,n)          for(ll i=0;i<n;i++)
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

ll next(vi& arr, ll target) {
	ll start = 0, end = arr.size(), ans = -1;
	while (start <= end) {
		ll mid = (start + end) / 2;
		if (arr[mid] <= target) start = mid + 1;
		else {
			ans = mid;
			end = mid - 1;
		}
	}
	return ans;
}


void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}



int main() {
	shammi();
	ll n, m; cin >> n >> m;
	vi a(n), b(m), csum(n, 0);
	F(i, n) {
		cin >> a[i];
		csum[i] = (i == 0 ? a[i] : csum[i - 1] + a[i]);
	}
	F(i, m) {
		cin >> b[i];
		// ll nxt = next(csum, b[i]);
		ll nxt = lower_bound(csum.begin(), csum.end(), b[i]) - csum.begin();
		if (nxt == 0) {
			cout << nxt + 1 << " " << b[i] << nl;
		} else {
			if (nxt == -1) cout << n << " " << b[i] - csum[n - 2] << nl;
			else cout << nxt + 1 << " " <<
				          (b[i] - csum[nxt - 1] == 0 ? ((nxt == 1) ? csum[nxt - 1] : csum[nxt - 1] - csum[nxt - 2]) : b[i] - csum[nxt - 1]) << nl;
		}
	}
	return 0;
}