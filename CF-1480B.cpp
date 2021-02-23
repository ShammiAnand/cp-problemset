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

int ceil(int a, int b) {
	return (a % b == 0 ? (a / b) : ((a / b) + 1));
}

int main() {
	shammi();
	w(t) {
		int A, B, n; cin >> A >> B >> n;
		vi a(n), b(n);
		for (int& attack : a) cin >> attack;
		for (int& health : b) cin >> health;

		vector<pii> monsters(n);
		F(i, n) {
			monsters[i] = {a[i], b[i]};
		}
		sort(all(monsters));
		bool possible = true;
		F(i, n) {
			// too slow
			// while (B > 0 && monsters[i].s > 0) {
			// 	B -= monsters[i].f;
			// 	monsters[i].s -= A;
			// }

			int k = min(ceil(B , monsters[i].f), ceil(monsters[i].s , A));
			B -= (k * monsters[i].f);
			monsters[i].s -= (k * A);

			if ((B < 1 && i + 1 != n) || monsters[i].s > 0) {
				possible = false;
				break;
			}
		}
		cout << (possible ? "YES\n" : "NO\n");
	}
	return 0;
}