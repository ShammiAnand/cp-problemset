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
		int n, k, start = -1, end = -1; cin >> n >> k;
		string S; cin >> S;
		bool foundFirst = false;
		int count = 0;
		F(i, n) {
			if (S[i] == '*') {
				count++;
				if (!foundFirst) {
					start = i;
					foundFirst = true;
				} else {
					end = i;
				}
			}
		}
		if (start != -1) S[start] = 'x';
		if (end != -1) S[end] = 'x';
		if (count <= 2) {
			// cout << S << nl;
			cout << count << nl;
		} else {
			int begin = start;
			while (begin + k < end) {
				int curr = -1;
				for (int i = begin; i <= begin + k; i++) {
					if (S[i] == '*') curr = i;
				}
				if (curr != -1) S[curr] = 'x';
				begin = curr;
			}
			count = 0;
			F(i, n) {
				if (S[i] == 'x') count++;
			}
			// cout << S << nl;
			cout << count << nl;

		}
	}
	return 0;
}