/*
@author: Shammi Anand
@contact: shammianand101@gmail.com
@website: shammianand.live
@problem: https://www.codechef.com/FEB21B/problems/MAXFUN
*/

#include <bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define f               first
#define s               second
#define vi              vector<ll>
#define pii             pair<int, int>
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

int main() {
	shammi();
	w(t) {
		int n; cin >> n;
		vi A(n);
		for (ll& a : A) cin >> a;

		sort(all(A));
		// x = A[n-1], y= A[0], z = A[1] or z = A[n-2];
		//  |Ax−Ay|+|Ay−Az|+|Az−Ax|
		cout << max({(A[n - 1] - A[0]) + (A[1] - A[0]) + (A[1] - A[n - 1]),
		             (A[n - 1] - A[0]) + (A[n - 2] - A[0]) + (A[n - 1] - A[n - 2]),
		             (A[n - 1] - A[0]) + (A[n / 2] - A[0]) + (A[n - 1] - A[n / 2])
		            }) << nl;
	}
	return 0;
}