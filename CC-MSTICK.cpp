/*
This code is written by Shammi Anand
contact : shammianand101@gmail.com, shammianand.live
*/
#include <bits/stdc++.h>

using namespace std;

#define ll              long long
#define pb              push_back
#define f               first
#define s               second
#define vi              vector<ll>
#define pii             pair<int, int>
#define rep(i,a,n)      for(int i=a;i<n;i++)
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

void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

ll findMin(vi& b, int L, int R) {
	ll mn = INT_MAX;
	for (int i = L; i <= R; i++) {
		mn = min(mn, b[i]);
	}
	return mn;
}

int main() {
	shammi();
	int n; cin >> n;
	vi b(n), sum(n, 0LL);
	F(i, n) {
		cin >> b[i];
		if (i != 0) sum[i] += sum[i - 1] + b[i];
		else sum[i] = b[i];

		// mn[i] = min(mn[i], b[i]);
	}
	int query; cin >> query;
	F(q, query) {
		int l, r; cin >> l >> r;
		double ans = 0;
		ll mn = findMin(b, l, r);
		ans += mn;
		for (int i = l; i <= r; i++) {
			ans += (double)(b[i] - mn) / 2.0;
		}
		if (l != 0) ans += sum[l - 1];
		if (r != n - 1) ans += (sum[n - 1] - sum[r]);

		cout << ans << nl;
	}
	return 0;
}