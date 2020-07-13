#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define MAX 100002

void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
ll countnottwo(ll* arr, ll n, ll k) {
	ll c = 0, rc = 0;
	for (ll i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			rc += (c * c + c ) / 2;
			c = 0;
		} else {
			c++;
		}
	}
	rc += (c * c + c ) / 2;
	return rc;
}
ll countfour(ll* arr, ll n, ll k) {
	ll two = 0, count = 0, rcount = 0, four = 0, pair = 0;
	for (ll i = 0; i < n; i++) {
		if (arr[i] % 4 == 0) {
			four++;
		} else {
			count++;
		}
		if (four > 0) {
			rcount += (n - i) * (count + 1);
			four = 0;
			count = 0;
		}
	}
	count = 0, four = 0;
	if (rcount == 0) {
		vector < ll > idx;
		for (ll i = 0; i < n; i++) {
			if (arr[i] % 2 == 0) {
				idx.push_back(i);
				continue;
			}
		}
		if (idx.size() < 2) return rcount;
		ll ic = 0;
		for (ll i = 0; i < idx.size() - 1; i++) {
			if (i == 0) rcount += (idx[i] - ic + 1) * (n - idx[i + 1]);
			else rcount += (idx[i] - ic) * (n - idx[i + 1]);
			ic += idx[i];
		}
	} else {
		ll num = 0, index;
		for (ll i = 0; i < n; i++) {
			if (arr[i] % 2 == 0) {
				if (arr[i] % 4 != 0) {
					two++;
					if (two == 2) index = i;
					else {
						num++;
						continue;
					}
				} else {
					if (two > 1) {
						rcount += ((num - (count + 1) - (i - index - 1)) * (i - index));
					}
					num = 0;
					count = 0;
					two = 0;
					continue;
				}
				num++;
			} else {
				num++;
				if (two == 1) count++;
			}
		}
		if (two > 1) {
			rcount += (num - (count + 1) - (n - index - 1)) * (n - index);
		}
	}

	return rcount;
}

int main() {
	shammi();
	ll t; cin >> t;
	while (t--) {
		ll n; cin >> n;
		ll A[n];
		for (ll i = 0; i < n; i++) cin >> A[i];

		ll count1 = countfour(A, n, 4);
		ll count2 = countnottwo(A, n, 2);

		cout << count2 + count1 << "\n";
		cout << "divisible by 4 : " << count1 << "\n";
		cout << "not divisible by 2 : " << count2 << "\n";
	}
	return 0;
}