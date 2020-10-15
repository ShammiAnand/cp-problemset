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
	int H, W; cin >> H >> W;
	vector<string> grid(H);
	for (string& w : grid) cin >> w;
	int count = 0;
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W - 1; j++) {
			if (grid[i][j] == '.' && grid[i][j + 1] == '.') count++;
		}
	}
	for (int i = 0; i < W; i++) {
		for (int j = 0; j < H - 1; j++) {
			if (grid[j][i] == '.' && grid[j + 1][i] == '.') count++;
		}
	}
	cout << count << nl;
	return 0;
}