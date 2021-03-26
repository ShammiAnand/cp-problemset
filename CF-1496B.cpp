/*
@author: Shammi Anand
@contact: shammianand101@gmail.com
@website: shammianand.live
@problem: https://codeforces.com/contest/1496/problem/B
*/

#include <bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define f               first
#define s               second
#define vi              vector<int>
#define pii             pair<int, int>
#define F(i,n)          for(ll i=0;i<n;i++)
#define all(a)          a.begin(), a.end()
#define INF             1e9+7
#define nl              "\n"
#define w(x)            int x; cin>>x; while(x--)

template<typename T_vector>
void output(const T_vector &v, int start = -1, int end = -1) {
	if (start < 0) start = 0;
	if (end < 0) end = int(v.size());

	for (int i = start; i < end; i++) {
		cout << v[i] << (i < end - 1 ? ' ' : '\n');
	}
}

// most significant set bit : leftmost
ll clz(ll N) {
	return N ? 32 - __builtin_clzll(N) : -INF;
}

ll ceil (ll a, ll b) {
	return (a % b == 0 ? (a / b) : ((a / b) + 1));
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
	w(t) {
		ll n, k, Max = 0, Mex; cin >> n >> k;
		unordered_map<ll, ll> arr;
		F(i, n) {
			ll elem; cin >> elem;
			arr[elem]++;
			Max = max(Max, elem);
		}
		for (ll i = 0; i <= Max + 1; i++) {
			if (arr.find(i) == arr.end()) {
				Mex = i;
				break;
			}
		}
		// cout << "mex = " << Mex << nl;
		// cout << "max = " << Max << nl;
		if (Mex < Max) {
			ll to_add = ceil((Mex + Max), 2);
			if (arr.find(to_add) == arr.end()) {
				cout << n + (k != 0) << nl;
			} else cout << n << endl;
		} else {
			cout << n + k << nl;
		}
		arr.clear();
	}
	return 0;
}