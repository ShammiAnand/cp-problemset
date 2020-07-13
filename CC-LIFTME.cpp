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
		ll n, q; cin >> n >> q;
		ll last = 0, total = 0;
		bool first = true;
		while (q--) {
			ll f, d;
			cin >> f >> d;
			if (first) {
				total += f;
				first = false;
				last = d;
				total += abs(d - f);
			} else {
				total += abs(last - f);
				total += abs(d - f);
				last = d;
			}
		}
		cout << total << "\n";
	}
	return 0;
}