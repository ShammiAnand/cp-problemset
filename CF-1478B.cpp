/*
@author: Shammi Anand
@contact: shammianand101@gmail.com
@website: shammianand.live
@problem: https://codeforces.com/contest/1478/problem/B
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
		int q, d; cin >> q >> d;
		vi a(q);
		for (int i = 0; i < q; i++) {
			cin >> a[i];
		}
		string lucky = to_string(d);
		for (int i = 0; i < q; i++) {
			bool possible = false;
			string curr = to_string(a[i]);
			if (curr.find(lucky) != string::npos) {
				possible = true;
				// break;
			} else {
				int copy = a[i];
				while (copy > 0) {
					copy -= d;
					string curr_copy = to_string(copy);
					if (curr_copy.find(lucky) != string::npos) {
						possible = true;
						break;
					}
				}
			}
			cout << (possible ? "YES\n" : "NO\n");
		}
	}
	return 0;
}