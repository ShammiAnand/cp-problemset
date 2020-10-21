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

int main() {
	shammi();
	w(t) {
		int n; cin >> n;
		vector<string> cells(n);
		for (string& cell : cells) {
			cin >> cell;
		}
		if (cells[0][1] == '0' && cells[1][0] == '0') {
			int changes = 0;
			pii c1 = { -1, -1}, c2 = { -1, -1};
			if (cells[n - 1][n - 2] == '0') {
				changes++;
				c1 = {n, n - 1};
			}
			if (cells[n - 2][n - 1] == '0') {
				changes++;
				c2 = {n - 1, n};
			}
			cout << changes << nl;
			if (c1.f != -1) cout << c1.f << " " << c1.s << nl;
			if (c2.f != -1) cout << c2.f << " " << c2.s << nl;
		} else if (cells[0][1] == '1' && cells[1][0] == '1') {
			int changes = 0;
			pii c1 = { -1, -1}, c2 = { -1, -1};
			if (cells[n - 1][n - 2] == '1') {
				changes++;
				c1 = {n, n - 1};
			}
			if (cells[n - 2][n - 1] == '1') {
				changes++;
				c2 = {n - 1, n};
			}
			cout << changes << nl;
			if (c1.f != -1) cout << c1.f << " " << c1.s << nl;
			if (c2.f != -1) cout << c2.f << " " << c2.s << nl;
		} else if (cells[0][1] == '1' && cells[1][0] == '0') {
			int changes = 0;
			pii c1 = { -1, -1}, c2 = { -1, -1};
			if (cells[n - 1][n - 2] == '1' && cells[n - 2][n - 1] == '1') {
				changes++;
				c1 = {1, 2};
			} else if (cells[n - 1][n - 2] == '0' && cells[n - 2][n - 1] == '0') {
				changes++;
				c2 = {2, 1};
			} else if (cells[n - 1][n - 2] == '0' && cells[n - 2][n - 1] == '1') {
				changes += 2;
				c1 = {2, 1};
				c2 = {n - 1, n};
			} else if (cells[n - 1][n - 2] == '1' && cells[n - 2][n - 1] == '0') {
				changes += 2;
				c1 = {2, 1};
				c2 = {n, n - 1};
			}
			cout << changes << nl;
			if (c1.f != -1) cout << c1.f << " " << c1.s << nl;
			if (c2.f != -1) cout << c2.f << " " << c2.s << nl;
		} else if (cells[0][1] == '0' && cells[1][0] == '1') {
			int changes = 0;
			pii c1 = { -1, -1}, c2 = { -1, -1};
			if (cells[n - 1][n - 2] == '1' && cells[n - 2][n - 1] == '1') {
				changes++;
				c1 = {2, 1};
			} else if (cells[n - 1][n - 2] == '0' && cells[n - 2][n - 1] == '0') {
				changes++;
				c2 = {1, 2};
			} else if (cells[n - 1][n - 2] == '0' && cells[n - 2][n - 1] == '1') {
				changes += 2;
				c1 = {2, 1};
				c2 = {n, n - 1};
			} else if (cells[n - 1][n - 2] == '1' && cells[n - 2][n - 1] == '0') {
				changes += 2;
				c1 = {2, 1};
				c2 = {n - 1, n};
			}
			cout << changes << nl;
			if (c1.f != -1) cout << c1.f << " " << c1.s << nl;
			if (c2.f != -1) cout << c2.f << " " << c2.s << nl;
		}
	}
	return 0;
}