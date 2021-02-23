/*
@author: Shammi Anand
@contact: shammianand101@gmail.com
@website: shammianand.live
@problem: https://codeforces.com/contest/1492/problem/B
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

int main() {
	shammi();
	w(t) {
		int n; cin >> n;
		vi p(n), index(n + 1), maxes;
		for (int i = 0; i < n; i++) {
			cin >> p[i];
			index[p[i]] = i;
		}
		maxes.pb(index[n]);
		for (int i = n - 1; i >= 1; i--) {
			if (index[i] < maxes.back()) {
				maxes.pb(index[i]);
			}
		}
		for (int i = 0; i < maxes.size(); i++) {
			if (i == 0) {
				for (int j = maxes[i]; j < n; j++) {
					cout << p[j] << " ";
				}
			} else {
				for (int j = maxes[i]; j < maxes[i - 1]; j++) {
					cout << p[j] << " ";
				}
			}
		}
		cout << nl;
	}
	return 0;
}