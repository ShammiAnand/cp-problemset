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

const int MAX = 2e5 + 11;

ll a[MAX], csum[MAX];
int n;

int bs(int pos, ll &hits, ll val) {
	if (val + hits < a[pos]) {
		hits += val;
		return pos;
	}
	int st = pos, en = n;
	int ret;
	while (st <= en) {
		int md = (st + en) >> 1;
		if (csum[md] - csum[pos - 1] - hits <= val)
			st = md + 1, ret = md;
		else
			en = md - 1;
	}
	if (ret == n) {
		hits = 0;
		return 1;
	}
	ret++;
	ll tmp = csum[ret] - csum[pos - 1] - hits - val;
	hits = a[ret] - tmp;
	return ret;
}

int main() {
	shammi();
	int q; cin >> n >> q;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		csum[i] += csum[i - 1] + a[i];
	}
	int cur = 1;
	ll hits = 0, sm = 0;
	for (int i = 0; i < q; i++) {
		ll x; cin >> x;
		cur = bs(cur, hits, x);
		cout << n - cur + 1 << nl;
	}
	return 0;
}