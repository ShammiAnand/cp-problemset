//incomplete......
#include<bits/stdc++.h>
using namespace std;

#define ll             long long
#define pb              push_back
#define mp              make_pair
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define ps(x,y)         fixed<<setprecision(y)<<x
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
		ll A[n];
		for (ll i = 0; i < n; i++) cin >> A[i];
		// ll x = A[0] + A[n - 1];
		ll count = 0;
		for (ll i = 0; i < n / 2; i++) {
			if ((A[i] + A[n - i - 1]) == k) {
				continue;
			} else {
				count += 2;
			}
		}
		cout << count << "\n";
	}
	return 0;
}