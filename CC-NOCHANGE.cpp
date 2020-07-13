#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool sortinrev(const pair<ll, ll> &a, const pair<ll, ll> &b) {
	return (a.first > b.first);
}
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
		ll n, p, dup_p;
		cin >> n >> p;
		dup_p = p;
		vector< pair<ll, ll> > D;
		ll C[n];
		ll sum = 0;
		ll num;
		for (int i = 0; i < n; i++) {
			cin >> num;
			D.push_back(make_pair(num, i));
		}
		sort(D.begin(), D.end(), sortinrev);
		for (int i = 0; i < n; i++) {
			if (p % D[i].first == 0) {
				C[D[i].second] = 0;
			} else {
				if (dup_p < D[i].first) C[D[i].second] = 1;
				else {
					C[D[i].second] = dup_p / D[i].first;
					dup_p = dup_p % D[i].first;
				}
				sum += C[D[i].second] * D[i].first;
			}
		}
		if (sum < p) C[D[n - 1].second]++;
		if (sum == 0) printf("NO\n");
		else {
			printf("YES ");
			for (int i = 0; i < n; i++) {
				printf("%lld ", C[i]);
			}
			printf("\n");
		}
	}
	return 0;
}