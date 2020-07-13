#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define mod 1000000007

void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	shammi();
	ll t; cin >> t;
	while (t--) {
		ll n, sum; cin >> n;
		if (n % 2 == 0) sum = (n * (n - 1)) / 2 - (((n / 2)) * (n + 2)) / 4;
		else sum = (n * (n - 1)) / 2 - (((n / 2) - 1) * n) / 4;

		cout << sum << "\n";
	}
	return 0;
}