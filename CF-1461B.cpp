/*
@author: Shammi Anand
@contact: shammianand101@gmail.com
@website: shammianand.live
@problem: https://codeforces.com/contest/1461/problem/B
@notes: TLE
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
		int n, m, ans = 0; cin >> n >> m;
		vector<string> matrix(n);
		F(i, n) cin >> matrix[i];


		for (int row = 0; row < n; row++) {
			for (int col = 0; col < m; col++) {
				if (matrix[row][col] != '*') continue;
				else {
					int k = m - col;
					for (int i = 0; i < k; i++) {
						if ((col - i >= 0) && (col + i < m) && (row + i < n)) {
							if (matrix[row + i].substr(col - i, 2 * i + 1) == string(2 * i + 1, '*')) {
								ans++;
							} else break;
						} else break;
					}
				}
			}
		}

		cout << ans << nl;
	}
	return 0;
}


