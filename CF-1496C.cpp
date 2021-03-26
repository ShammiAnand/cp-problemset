/*
@author: Shammi Anand
@contact: shammianand101@gmail.com
@website: shammianand.live
@problem: https://codeforces.com/contest/1496/problem/C
*/

#include <bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define f               first
#define s               second
#define vi              vector<ll>
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

bool key(ll a, ll b) {
	return abs(a) <= abs(b);
}

int main() {
	shammi();
	w(t) {
		int n; cin >> n;
		vi miner, mine;
		for (int i = 0; i < 2 * n; i++) {
			ll x, y; cin >> x >> y;
			if (x == 0) {
				// miner
				miner.pb(y);
			} else {
				// mine
				mine.pb(x);
			}
		}

		// sort on the basis of distance from origin
		sort(mine.begin(), mine.end(), key);
		sort(miner.begin(), miner.end(), key);

		double ans = 0;
		for (int i = 0; i < n; i++) {
			ans += sqrt((mine[i] * mine[i]) + (miner[i] * miner[i]));
		}
		printf("%.15f\n", ans);
	}
	return 0;
}