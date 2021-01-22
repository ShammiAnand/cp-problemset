/*
@author: Shammi Anand
@contact: shammianand101@gmail.com
@website: shammianand.live
@problem: https://www.codechef.com/JAN21B/problems/FAIRELCT
*/

#include <bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define f               first
#define s               second
#define vi              vector<int>
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
		int n, m, john = 0, jack = 0; cin >> n >> m;
		vi A(n), B(m);
		for (int& a : A) {
			cin >> a;
			john += a;
		}
		for (int& b : B) {
			cin >> b;
			jack += b;
		}
		if (john > jack) {
			cout << 0 << nl;
		} else {
			bool done = false;
			int swaps = 0;
			sort(all(A));
			sort(all(B), greater<int>());
			for (int i = 0; i < min(m, n); i++) {
				if (john > jack) {
					cout << swaps << nl;
					done = true;
					break;
				}
				if (A[i] < B[i]) {
					swaps++;
					jack -= (B[i] - A[i]);
					john += (B[i] - A[i]);
				}
			}
			if (!done) {
				if (john <= jack) cout << -1 << nl;
				else cout << swaps << nl;
			}
		}
	}
	return 0;
}