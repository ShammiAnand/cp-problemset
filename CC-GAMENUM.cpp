#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define INT_BITS 32

ll countBits(ll number) {
	return (ll)log2(number) + 1;
}
/*Function to right rotate n by d bits*/
ll rightRotate(ll n) {
	return (n >> 1) | (n << (INT_BITS - 1));
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll t;
	scanf("%lld", &t);
	while (t--) {
		ll a, b, bs, count = 0;
		scanf("%lld%lld", &a, &b);
		bs = b;
		vector <pair<ll, ll>> max;
		max.push_back(make_pair(a ^ b, count));
		ll num = countBits(b);
		while (num--) {
			count++;
			bs = rightRotate(bs);
			max.push_back(make_pair(a ^ bs, count));
		}
		sort(max.begin(), max.end());
		printf("%lld %lld\n", max[max.size() - 1].second, max[max.size() - 1].first);
	}
	return 0;
}