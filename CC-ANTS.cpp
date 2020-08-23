//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define Max(a,b,c)      max(a,max(b,c))
#define Min(a,b,c)      min(a,min(b,c))
#define pb              emplace_back
#define mp              make_pair
#define f               first
#define s               second
#define mod             1000000007
#define nl              "\n"
#define w(x)            int x; cin>>x; while(x--)

inline bool isPowerOfTwo(int x) {
	//O(v) -> v is the number of bits in the binary form of x
	return x && (!(x & (x - 1)));
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
	int n, m, k, s; cin >> n >> m >> k >> s;
	for (int i = 0; i < m; i++) {
		int u, v, w; cin >> u >> v >> w;
	}
	if (m <= 700) {
		cout << m << nl;
		for (int i = 0; i < m; i++) {
			cout << 2 << nl;
		}
	} else {
		cout << m << nl;
		for (int i = 0; i < 700; i++) {
			cout << 2 << nl;
		}
		for (int i = 700; i < m; i++) {
			cout << 1 << " " << i % n << nl;
		}
	}
	return 0;
}