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
		ll n; cin >> n;
		ll a[n], b[n];
		ll count = 0, ma = mod, mb = mod;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			ma = min(ma, a[i]);
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];
			mb = min(mb, b[i]);
		}



		// ma = a[0];
		// mb = b[0];

		for (int i = 0; i < n; i++) {
			ll mn = min(a[i] - ma, b[i] - mb);
			count += mn;
			a[i] -= mn;
			b[i] -= mn;

			count += a[i] - ma;
			count += b[i] - mb;
		}

		cout << count << nl;

	}
	return 0;
}