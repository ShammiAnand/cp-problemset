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

void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

// I need a way to precompute all the heights that are greater than the
// current height and store it somewhere to be fast. ??


bool check1(ll H[], ll curr, ll final ) {
	for (int i = curr - 1; i >= final; i--) {
		if (H[i] >= H[curr]) return false;
	}
	return true;
}
bool check2(ll H[], ll curr, ll final ) {
	for (int i = curr + 1; i <= final; i++) {
		if (H[i] >= H[curr]) return false;
	}
	return true;
}


int main() {
	shammi();
	ll n, q; cin >> n >> q;
	ll H[n + 1], A[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> H[i];
	}
	for (int i = 1; i <= n; i++) cin >> A[i];

	ll sum = 0;
	for (int i = 0; i < q; i++) {
		ll num, b, c; cin >> num >> b >> c;
		if (num == 1) {
			A[b] = c;
			continue;
		} else {
			//Pb to Pc
			if (b != c && H[b] <= H[c]) {
				cout << -1 << nl;
				continue;
			}
			sum = 0;
			bool possible = true;
			ll peak = H[c]; // Think???
			if (b > c) {
				// backwards
				for (int i = b; i > c; i--) {
					//can only glide high to low
					// curr_peak = H[i];
					if (H[i] >= H[b]) {
						if (i == b) {
							sum += A[i];
							continue;
						}
						else {
							possible = false;
							break;
						}
					}
					if (check1(H, i, c)) {
						//cannot fly
						sum += A[i];
					}
				}
			} else {
				//forward
				for (int i = b; i < c; i++) {
					if (H[i] >= H[b]) {
						if (i == b) {
							sum += A[i];
							continue;
						} else {
							possible = false;
							break;
						}
					}
					if (check2(H, i, c)) {
						sum += A[i];
					}
				}
			}
			if (possible) cout << sum + A[c] << nl;
			else cout << -1 << nl;
		}
	}
	return 0;
}