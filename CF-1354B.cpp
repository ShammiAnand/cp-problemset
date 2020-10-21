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
bool check(ll arr[]) {
	if (arr[0] == 1 && arr[1] == 1 && arr[2] == 1) return true;
	else return false;
}
int main() {
	shammi();
	w(t) {
		// char buf[200043];
		// scanf("%s", buf);
		string S; cin >> S;
		int ans = int(1e9);
		int n = S.size();
		vector<pair<char, int> > c;
		for (auto x : S) {
			if (c.empty() || c.back().first != x)
				c.push_back(make_pair(x, 1));
			else
				c.back().second++;
		}
		int m = c.size();
		for (int i = 1; i < m - 1; i++)
			if (c[i - 1].first != c[i + 1].first)
				ans = min(ans, c[i].second + 2);
		if (ans > n)
			ans = 0;
		// printf("%d\n", ans);
		cout << ans << nl;
	}
	return 0;
}