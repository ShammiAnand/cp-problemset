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

const ll mod = 1000000007;

int main() {
	shammi();
	w(t) {
		ll n, a, b; cin >> n >> a >> b;
		if (a + b > n) cout << 0 << nl;
		else {
			ll rem = (n - (a + b));
			rem++;
			cout << 2 * ((((((n - a) % mod) * (rem % mod)) % mod) * (((((n - b) % mod) * (rem % mod)) % mod))) % mod) << nl;
			// cout << 2 * (((n - a)*rem) * ((n - b)*rem)) << nl;
		}
	}
	return 0;
}