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
		vi a(n + 1), selected(n + 1, 0);
		unordered_map<int, int> mp;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			mp[a[i]]++;
		}
		if (mp.size() == 1) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
			for (int i = 1; i <= n; i++) {
				if (selected[i] == 0) {
					selected[i] = 1;
					for (int j = 1; j <= n; j++) {
						if (a[i] != a[j]) {
							cout << min(i, j) << " " << max(i, j) << nl;
							selected[j] = 1;
							break;
						}
					}
				}
			}
		}
	}
	return 0;
}