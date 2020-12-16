/*
@author: Shammi Anand
@contact: shammianand101@gmail.com
@website: shammianand.live
@problem: https://codeforces.com/contest/1462/problem/C
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
		int x; cin >> x;
		if (x <= 9) {
			cout << x << nl;
			continue;
		} else {
			vector<bool> present(10, false);
			vi digits = {9, 8, 7, 6, 5, 4, 3, 2, 1};
			int counter = 0, sum = 0;
			string ans = "";
			while (x > digits[counter] && counter < 9) {
				x -= digits[counter];
				present[digits[counter]] = true;
				sum += digits[counter];
				ans += char(digits[counter] + '0');
				counter++;
			}
			if (counter == 9 && x != 0) cout << -1 << nl;
			else {
				if (!present[x]) {
					ans += char(x + '0');
					sort(all(ans));
					cout << ans << nl;
				} else cout << -1 << nl;
			}

		}
	}
	return 0;
}