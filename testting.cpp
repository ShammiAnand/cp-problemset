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
#define mod             1000000007
#define INF             1000000007
#define nl              "\n"
#define w(x)            int x; cin>>x; while(x--)

void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
pair<int, int> t[4 * 1001];

pair<int, int> combine(pair<int, int> a, pair<int, int> b) {
	if (a.first > b.first)
		return a;
	if (b.first > a.first)
		return b;
	return make_pair(a.first, a.second + b.second);
}

void build(int a[], int v, int tl, int tr) {
	if (tl == tr) {
		t[v] = make_pair(a[tl], 1);
	} else {
		int tm = (tl + tr) / 2;
		build(a, v * 2, tl, tm);
		build(a, v * 2 + 1, tm + 1, tr);
		t[v] = combine(t[v * 2], t[v * 2 + 1]);
	}
}

pair<int, int> get_max(int v, int tl, int tr, int l, int r) {
	if (l > r)
		return make_pair(-INF, 0);
	if (l == tl && r == tr)
		return t[v];
	int tm = (tl + tr) / 2;
	return combine(get_max(v * 2, tl, tm, l, min(r, tm)),
	               get_max(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r));
}

void update(int v, int tl, int tr, int pos, int new_val) {
	if (tl == tr) {
		t[v] = make_pair(new_val, 1);
	} else {
		int tm = (tl + tr) / 2;
		if (pos <= tm)
			update(v * 2, tl, tm, pos, new_val);
		else
			update(v * 2 + 1, tm + 1, tr, pos, new_val);
		t[v] = combine(t[v * 2], t[v * 2 + 1]);
	}
}
int main() {
	shammi();
	int n, q; cin >> n >> q;
	// pair<int, int> t[4 * n];
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	build(a, 1, 0, n - 1);
	for (int i = 0; i < q; i++) {
		int l, r; cin >> l, r ;
		pair<int, int> ans = get_max(1, 0, n - 1, l - 1, r - 1);
		cout << "Maximum : " << ans.first << nl;
		cout << "Occurence : " << ans.second << nl;
	}
	return 0;
}