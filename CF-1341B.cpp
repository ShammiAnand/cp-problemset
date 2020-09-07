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

bool pick(int i, vector<int>& v, int l, int r) {
	if (i == l || i == r) return 0;
	return v[i - 1] < v[i] && v[i] > v[i + 1];
}

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for (auto &i : v) cin >> i;
	int ans = -1, l = -1, r = -1, now = 0;
	for (int i = 1; i + 1 < k; ++i) {
		if (pick(i, v, 0, k - 1)) ++now;
	}
	ans = now + 1, l = 0, r = k - 1;
	for (int i = k; i < n; ++i) {
		if (pick(i - k + 1, v, i - k, i - 1)) --now;
		if (pick(i - 1, v, i - k + 1, i)) ++now;
		if (now + 1 > ans) {
			ans = now + 1;
			l = i - k + 1;
			r = i;
		}
	}
	cout << ans << " " << l + 1 << "\n";
}


int main() {
	shammi();
	w(t) {
		// int n, k; cin >> n >> k;
		// vector<int> heights(n), peaks(n), prefix(n, 0);
		// for (int& elem : heights) {
		// 	cin >> elem;
		// }
		// peaks[0] = 0, peaks[n - 1] = 0;
		// prefix[0] = 0;
		// for (int i = 1; i < n - 1; i++) {
		// 	if (heights[i] > heights[i - 1] && heights[i] > heights[i + 1]) {
		// 		peaks[i] = 1;
		// 	} else peaks[i] = 0;
		// 	prefix[i] += (prefix[i - 1] + peaks[i]);
		// }
		// int mx = 0, idx;
		// for (int i = 0; i < n - k; i++) {
		// 	// mx = max(mx, (prefix[i + k - 1] - prefix[i]));
		// 	if (mx < (prefix[i + k - 1] - prefix[i])) {
		// 		mx = (prefix[i + k - 1] - prefix[i]);
		// 		idx = i;
		// 	}
		// }
		// cout << idx + 1 << " " << "Peaks = " << mx << nl;
		solve();
	}
	return 0;
}