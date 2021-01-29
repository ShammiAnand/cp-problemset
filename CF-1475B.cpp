/*
@author: Shammi Anand
@contact: shammianand101@gmail.com
@website: shammianand.live
@problem:
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
		bool possible = false;
		for (int i = 0; i <= 100000; i++) {
			if ((n - (2020 * i)) > 0) {
				if ((n - (2020 * i)) % 2021 == 0) {
					possible = true;
					break;
				}
			}
			if ((n - (2021 * i)) > 0) {
				if ((n - (2021 * i)) % 2020 == 0) {
					possible = true;
					break;
				}
			}
		}
		if (possible) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}