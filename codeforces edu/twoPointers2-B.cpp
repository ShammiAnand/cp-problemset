/*
@author: Shammi Anand
@contact: shammianand101@gmail.com
@website: shammianand.live
@problem:

Given an array of 𝑛 integers 𝑎𝑖.
Let's say that the segment of this array 𝑎[𝑙..𝑟] (1≤𝑙≤𝑟≤𝑛)
is good if the sum of elements on this segment is at least 𝑠.
Your task is to find the shortest good segment.

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

int main() {
	shammi();
	ll n, S; cin >> n >> S;
	vi a(n);
	for (ll& elem : a) cin >> elem;

	ll x = 0, l = 0, res = INT_MAX;
	for (ll r = 0; r < n; r++) {
		x += a[r];
		while (x - a[l] >= S) {
			x -= a[l];
			l++;
		}
		if (x >= S) res = min(res, r - l + 1);
	}

	if (res != INT_MAX) cout << res << nl;
	else cout << -1 << nl;

	return 0;
}











