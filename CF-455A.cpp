/*
This code is written by Shammi Anand
contact : shammianand101@gmail.com, shammianand.me
*/
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define f               first
#define s               second
#define vi              vector<int>
#define pii             pair<int, int>
#define rep(i,a,n)      for(int i=a;i<n;i++)
#define F(i,n)          for(int i=0;i<n;i++)
#define all(a)          a.begin(), a.end()
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

const int mxN = 1e5;

ll dp[mxN + 1];

int main() {
	shammi();
	int n; cin >> n;
	map<int, int> mp;
	vector<pii> v;
	F(i, n) {
		int elem; cin >> elem;
		mp[elem]++;
	}
	for (pii p : mp) v.pb(p);

	F(i, ((int)v.size())) {
		int pr = i - 1;
		while (pr >= 0 && v[pr].f + 1 == v[i].f) pr--;
		if (pr == -1) dp[i] = 1LL * v[i].f * v[i].s;
		else dp[i] = dp[pr] + 1LL * v[i].f * v[i].s;
		if (i != 0) dp[i] = max(dp[i], dp[i - 1]);
	}
	cout << dp[v.size() - 1] << nl;
	return 0;
}