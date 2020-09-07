//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define mp              make_pair
#define f               first
#define s               second
#define all(x)          x.begin(),x.end()
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

int main() {
	shammi();
	w(t) {
		int n, k;
		cin >> n >> k;
		vector<int> x(n), y(n);
		for (int &it : x) cin >> it;
		for (int &it : y) cin >> it;
		sort(all(x));
		int j = n - 1;
		vector<int> l(n), r(n);
		for (int i = n - 1; i >= 0; --i) {
			while (x[j] - x[i] > k) --j;
			r[i] = j - i + 1;
			if (i + 1 < n) r[i] = max(r[i], r[i + 1]);
		}
		j = 0;
		for (int i = 0; i < n; ++i) {
			while (x[i] - x[j] > k) ++j;
			l[i] = i - j + 1;
			if (i > 0) l[i] = max(l[i], l[i - 1]);
		}
		int ans = 1;
		for (int i = 0; i < n - 1; ++i) {
			ans = max(ans, r[i + 1] + l[i]);
		}
		cout << ans << nl;
	}
	return 0;
}
