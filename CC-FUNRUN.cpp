#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll t;
	scanf("%lld", &t);
	while (t--) {
		ll n, ma = 0, mb = 0;
		scanf("%lld", &n);
		ll A[n], B[n];
		for (ll i = 0; i < n; i++) {
			scanf("%lld", &A[i]);
			ma = max(ma, A[i]);
		}
		for (ll i = 0; i < n; i++) {
			scanf("%lld", &B[i]);
			mb = max(mb, B[i]);
		}
		if (ma != mb) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}