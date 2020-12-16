/*
This code is written by Shammi Anand
contact : shammianand101@gmail.com, shammianand.live
*/
#include <bits/stdc++.h>

using namespace std;

#define ll              long long
#define pb              push_back
#define f               first
#define s               second
#define vi              vector<int>
#define pii             pair<int, int>
#define rep(i,a,n)      for(int i=a;i<n;i++)
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

bool power(int i, int j, vi& sheets, int k) {
	return (k + 1 - abs(i - j) - abs(sheets[i] - sheets[j])) > 0;
}

int main() {
	shammi();
	w(t) {
		int n, k, ans = 0; cin >> n >> k;
		string S; cin >> S;
		vi sheets(n, 0);
		for (int i = 0; i < n; i++) {
			if (S[i] == ':') {
				sheets[i]++;
				if (i != 0) sheets[i] += sheets[i - 1];
			}
		}
		int M = -1, I = -1; // regulary update values of M & I greedily
		for (int i = 0; i < n; i++) {
			if (S[i] == 'X') {
				M = -1, I = -1;
				continue;
			}
			if (S[i] == 'M') {
				M = i;
				if (I != -1) {
					if (power(i, I, sheets, k)) {
						ans++;
						// cout << "chosen : " << i << " " << I << nl;
						M = -1;
						I = -1;
					} else {
						I = -1;
					}
				}
			}
			if (S[i] == 'I') {
				I = i;
				if (M != -1) {
					if (power(i, M, sheets, k)) {
						ans++;
						// cout << "chosen : " << i << " " << M << nl;
						M = -1;
						I = -1;
					} else {
						M = -1;
					}
				}
			}
		}
		// output(sheets);
		cout << ans << nl;
	}
	return 0;
}













