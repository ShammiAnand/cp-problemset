/*
@author: Shammi Anand
@contact: shammianand101@gmail.com
@website: shammianand.live
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
		int n, m, cancel = 0; cin >> n >> m;
		vi a(n), b(m), got(102, 0);
		F(i, n) {
			cin >> a[i];
			got[a[i]]++;
		}
		F(i, m) {
			cin >> b[i];
			if (got[b[i]] > 0) cancel++;
		}
		cout << cancel << nl;
	}
	return 0;
}