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


void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int main() {
	shammi();
	int n, s; cin >> n >> s;
	string mn(n, '0'), mx(n, '0');
	if (s == 0) {
		if (n != 1) cout << -1 << " " << -1 << nl;
		else cout << 0 << " " << 0 << nl;
	} else if (s <= 9) {
		int target = s;
		mx[0] = char('0' + s);

		mn[0] = '1';
		target -= 1;
		for (int i = n - 1; i >= 0 && target > 0; i--) {
			if (target >= (9 - (mn[i] - '0'))) {
				target -= (9 - (mn[i] - '0'));
				mn[i] = '9';
			} else {
				int curr = mn[i] - '0';
				target += curr;
				mn[i] = char('0' + target);
				break;
			}
		}
		cout << mn << " " << mx << nl;
	} else {
		if (9 * n < s) {
			cout << -1 << " " << -1 << nl;
		} else {
			int target = s;

			mn[0] = '1';
			target -= 1;
			for (int i = n - 1; i >= 0 && target > 0; i--) {
				if (target >= (9 - (mn[i] - '0'))) {
					target -= (9 - (mn[i] - '0'));
					mn[i] = '9';
				} else {
					int curr = mn[i] - '0';
					target += curr;
					mn[i] = char('0' + target);
					break;
				}
			}
			target = s;
			for (int i = 0; i < n && target > 0; i++) {
				if (target >= 9) {
					target -= 9;
					mx[i] = '9';
				} else {
					mx[i] = char('0' + target);
					break;
				}
			}
			cout << mn << " " << mx << nl;
		}
	}
	return 0;
}