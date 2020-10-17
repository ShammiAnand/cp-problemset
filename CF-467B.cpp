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
		cout << v[i] << "\n";
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
	int n, m, k; cin >> n >> m >> k;
	vector<string> bits(m + 1);
	for (int i = 0; i <= m; i++) {
		int x; cin >> x;
		bits[i] = (bitset<21>(x).to_string());
	}
	// cout << bits[m] << nl;
	// output(bits);
	string target = bits[m];
	int ans = 0;
	for (int i = 0; i < m; i++) {
		int count = 0;
		for (int j = 0; j <= 20; j++) {
			if (target[j] != bits[i][j]) count++;
		}
		if (count <= k) ans++;
	}
	cout << ans << nl;
	return 0;
}