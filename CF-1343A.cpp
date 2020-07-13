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
	vector <ll>	powers;
	for (ll i = 2; i <= 33; i++) {
		powers.pb(pow(2, i) - 1);
	}
	w(t) {
		ll n; cin >> n;
		for (ll i = 0; i < powers.size(); i++) {
			if (n % powers[i] == 0) {
				cout << n / powers[i] << "\n";
				break;
			}
		}
	}
	return 0;
}