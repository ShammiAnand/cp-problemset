//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define Max(a,b,c)      max(a,max(b,c))
#define Min(a,b,c)      min(a,min(b,c))
#define pb              push_back
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
	int p, q, l, r; cin >> p >> q >> l >> r;
	vector<pair<int, int>> Z, X;
	for (int i = 0; i < p; i++) {
		int a, b; cin >> a >> b;
		Z.pb({a, b});
	}
	for (int i = 0; i < q; i++) {
		int a, b; cin >> a >> b;
		X.pb({a, b});
	}
	// sort(Z.begin(), Z.end());
	// sort(X.begin(), X.end());
	int total = 0, count = 0;
	for (int i = l; i <= r; i++) {
		bool possible = false;
		count = 0;
		for (auto x : X) {
			count = 0;
			possible = false;
			for (auto z : Z) {
				if (((x.f + i) >= z.f && (x.f + i) <= z.s) || ((x.s + i) >= z.f && (x.s + i) <= z.s)) {
					possible = true;
					count++;
				}
			}
			if (possible) total += count;
		}
	}
	cout << total << nl;

	return 0;
}