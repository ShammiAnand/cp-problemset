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
		string S; cin >> S;
		ll n = S.length(), count = 0;
		// ll first = 0;
		if (n % 2) {
			cout << 0 << nl;
			continue;
		}
		for (ll len = 1; len < n / 2 ; len++) {
			string a = S.substr(0, len);
			string b = S.substr(len, len);
			string c = S.substr(2 * len, (n / 2) - len);
			string d = S.substr(2 * len + (n / 2) - len, (n / 2) - len);
			// cout << a << " " << b << " " << c << " " << d << nl;
			if (a == b && c == d) {
				count++;
			}
			// len++;
		}
		cout << count << nl;
		// cout << first << nl;
	}
	return 0;
}