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
int main() {
	shammi();
	w(t) {
		ll n, k; cin >> n >> k;
		ll P[n];
		bool possible = false;
		ll mn = mod, idx;
		for (ll i = 0; i < n; i++) {
			cin >> P[i];
			if (k % P[i] == 0) {
				possible = true;
				if (k / P[i] < mn) {
					mn = k / P[i];
					idx = i;
				}
			}
		}
		if (possible) cout << P[idx] << nl;
		else cout << -1 << nl;
	}
	return 0;
}