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
		ll n, count = 1; cin >> n;
		if ((n / 2) % 2 == 0) {
			cout << "YES\n";
			for (ll i = 2; i <= 2 * n; i += 4) cout << i << " ";
			for (ll i = 2; i <= 2 * n; i += 4) {
				if (count % 2 == 1) {
					cout << i - 1 << " ";
					count++;
				} else {
					cout << i + 1 << " ";
					count++;
				}
			}
			cout << endl;
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}