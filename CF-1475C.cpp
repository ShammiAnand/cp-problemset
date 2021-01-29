/*
@author: Shammi Anand
@contact: shammianand101@gmail.com
@website: shammianand.live
@problem:
*/

#include <bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define f               first
#define s               second
#define vi              vector<int>
#define pii             pair<ll, ll>
#define F(i,n)          for(int i=0;i<n;i++)
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

void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int next(vector<pii>& arr, int target) {
	int start = 0;
	int end = arr.size();
	int ans = -1;
	while (start <= end) {
		int mid = (start + end) / 2;
		if (arr[mid].f <= target) start = mid + 1;

		// Move left side.
		else {
			ans = mid;
			end = mid - 1;
		}
	}
	return ans;
}


int main() {
	shammi();
	w(t) {
		int  a, b, k; cin >> a >> b >> k;
		unordered_map<int, int> A, B;
		for (int i = 0; i < k; i++) {
			int elem; cin >> elem;
			A[elem]++;
		}
		for (int i = 0; i < k; i++) {
			int elem; cin >> elem;
			B[elem]++;
		}
		ll ans = (k * (k - 1LL)) / 2;
		for (pii elem : A) ans -= (elem.s * (elem.s - 1)) / 2;
		for (pii elem : B) ans -= (elem.s * (elem.s - 1)) / 2;

		cout << ans << nl;
	}
	return 0;
}