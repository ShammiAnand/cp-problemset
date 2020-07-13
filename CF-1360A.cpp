#include<bits/stdc++.h>
using namespace std;

#define ll             	long long
#define pb              push_back
#define mp              make_pair
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define nl				"\n"
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(x)            ll x; cin>>x; while(x--)

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
		int a, b; cin >> a >> b;
		if (a == b) {
			cout << 4 * a*b << nl;
			continue;
		} else {
			if (2 * min(a, b) == max(a, b)) {
				cout << pow(max(a, b), 2) << nl;
				continue;
			}
			cout << pow((max(2 * min(a, b), max(a, b))), 2) << nl;
		}
	}
	return 0;
}