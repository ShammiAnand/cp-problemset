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
	ll n; cin >> n;
	vector<int> ptsA, ptsB;
	bool last = true;
	ll A = 0, B = 0;
	for (int i = 0; i < n; i++) {
		ll pts; cin >> pts;
		if (pts > 0) {
			A += pts;
			ptsA.pb(pts);
		} else {
			B += (-1 * pts);
			ptsB.pb((-1 * pts));
		}
		if (i == n - 1) {
			if (pts < 0) last = false;
		}
	}
	if (A > B) {
		cout << "first" << nl;
	} else if (B > A) {
		cout << "second" << nl;
	} else {
		if (ptsA.size() != ptsB.size()) {
			for (int i = 0; i < min(ptsA.size(), ptsB.size()); i++) {
				if (ptsA[i] != ptsB[i]) {
					if (ptsA[i] > ptsB[i]) {
						cout << "first" << nl;
						return 0;
					} else {
						cout << "second" << nl;
						return 0;
					}
				} else continue;
			}
			if (ptsA.size() > ptsB.size()) cout << "first" << nl;
			else cout << "second" << nl;
		} else {
			for (int i = 0; i < ptsA.size(); i++) {
				if (ptsA[i] != ptsB[i]) {
					if (ptsA[i] > ptsB[i]) {
						cout << "first" << nl;
						return 0;
					} else {
						cout << "second" << nl;
						return 0;
					}
				} else continue;
			}
			if (last) cout << "first" << nl;
			else cout << "second" << nl;
		}
	}
	return 0;
}