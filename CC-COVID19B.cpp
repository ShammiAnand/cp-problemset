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
#define print(a)        for(auto x : a) cout << x << " ";
#define INF             1e9+7
#define nl              "\n"
#define w(x)            int x; cin>>x; while(x--)


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
		vi v(n);
		for (int& elem : v) {
			cin >> elem;
		}
		int mini = n;
		int maxi = 0;
		map<pii, vi> mp;
		F(i, n) {
			rep(j, i + 1, n) if (v[i] > v[j]) {
				int t = ((j - i) * 120) / (v[i] - v[j]);
				int x = i * 120 + v[i] * t;
				assert(120 * i + v[i]*t == 120 * j + v[j]*t);
				mp[ {t, x}].push_back(i);
				mp[ {t, x}].push_back(j);
			}
		}
		F(i, n) {
			vector<bool>infected(n);
			infected[i] = true;
			for (auto p : mp) {
				bool spread = false;
				for (int x : p.second)spread |= infected[x];
				if (spread) {
					for (int x : p.second) {
						infected[x] = true;
					}
				}
			}
			int cnt = 0;
			for (int x : infected) cnt += x;
			mini = min(mini, cnt);
			maxi = max(maxi, cnt);
		}
		printf("%d %d\n", mini, maxi);
	}
	return 0;
}