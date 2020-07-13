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
bool isPrime(ll n) {
	for (ll i = 2; (i * i) <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
bool kFactors(ll n, ll k)
{
	// A vector to store all prime factors of n
	vector<ll> P;

	// Insert all 2's in vector
	while (n % 2 == 0)
	{
		P.push_back(2);
		n /= 2;
	}

	// n must be odd at this point
	// So we skip one element (i = i + 2)
	for (ll i = 3; i * i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			n = n / i;
			P.push_back(i);
		}
	}

	// This is to handle when n > 2 and
	// n is prime
	if (n > 2)
		P.push_back(n);

	// If size(P) < k, k factors are not possible
	if (P.size() < k)
	{
		// cout << "-1" << endl;
		return false;
	} else {
		return true;
	}
}
int main() {
	shammi();
	ll t; cin >> t;
	while (t--) {
		ll x, k; cin >> x >> k;
		if ((x - k - 1) > 0) {
			if (isPrime(x) && k > 1) {
				cout << 0 << "\n";
			} else {
				if (kFactors(x, k)) cout << 1 << "\n";
				else cout << 0 << "\n";
			}
		} else {
			if (k == 1 && x > k) {
				cout << 1 << "\n";
				continue;
			}
			cout << 0 << "\n";
		}
	}
	return 0;
}