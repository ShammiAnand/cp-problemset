/*
This code is written by Shammi Anand
contact : shammianand101@gmail.com, shammianand.live
*/
#include <bits/stdc++.h>

using namespace std;

#define ll              long long
#define pb              push_back
#define f               first
#define s               second
#define vi              vector<ll>
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
	cout << v.size() << nl;
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
		ll n; cin >> n;
		bool found = false;
		vi stored;
		ll mx = 0;
		for (ll i = 2; i * i <= n; i++) {
			if (n % i == 0) {
				ll d = i, curr = n, count = 0;
				while (curr % d == 0) {
					curr /= d;
					count++;
				}
				if (count == 1) {
					continue;
				}
				if (mx < count) {
					// cout << count << nl;
					mx = count;
					stored.clear();
					for (ll j = 0; j < count - 1; j++) {
						// cout << d << " ";
						stored.pb(d);
					}
					// cout << curr*d << nl;
					stored.pb(curr * d);
					found = true;
				}

				// break;
			}
		}
		if (!found) {
			cout << 1 << nl;
			cout << n << nl;
		} else {
			output(stored);
		}
	}
	return 0;
}