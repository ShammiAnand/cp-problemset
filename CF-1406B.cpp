/*
This code is written by Shammi Anand
contact : shammianand101@gmail.com, shammianand.me
*/
#include<bits/stdc++.h>
using namespace std;

#define ll              long long int
#define pb              push_back
#define f               first
#define s               second
#define vi              vector<int>
#define vll             vector<ll>
#define pii             pair<int, int>
#define rep(i,a,n)      for(int i=a;i<n;i++)
#define F(i,n)          for(int i=0;i<n;i++)
#define all(a)          a.begin(), a.end()
#define INF             1e9
#define nl              "\n"
#define w(x)            int x; cin>>x; while(x--)


void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

bool key(ll a, ll b) {
	return (abs(a) > abs(b));
}

long long int ans;

int main() {
	shammi();
	w(t) {
		ll n, mx = -INF, neg = 0, pos = 0; cin >> n;
		vll a(n);
		for (ll& elem : a) {
			cin >> elem;
			mx = max(mx, elem);
			(elem >= 0) ? pos++ : neg++;
		}
		// cout << pos << " " << neg << nl;
		sort(all(a), key);
		// for (int elem : a) cout << elem << " ";
		// cout << nl;
		if (mx < 0 || n == 5) {
			cout << a[n - 1]*a[n - 2]*a[n - 3]*a[n - 4]*a[n - 5] << nl;
			continue;
		}
		ans = a[0] * a[1] * a[2] * a[3] * a[4];
		if (ans >= 0) {
			cout << ans << nl;
			continue;
		} else {
			for (int i = 5; i < n; i++) {
				for (int j = 0; j < 5; j++) {
					ll temp = a[i];
					for (int k = 0; k < 5; k++) {
						if (k != j) temp *= a[k];
					}
					ans = max(ans, temp);
				}
			}
			cout << ans << nl;
		}
	}
	return 0;
}