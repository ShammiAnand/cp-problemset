/*
@author: Shammi Anand
@contact: shammianand101@gmail.com
@website: shammianand.live
@problem:

You are given an array of N strings containing of lower English alphabets. Any number
of contagious strings can be grouped together to form a new string. The grouping function
accepts two integers X & Y and concatenates all strings between indices X & Y (both inclusive)
and returns a modified string which is sorted.

You're asked Q question each containing two integers L & R. Determine the Kth character in the
concatenated string if we pass L and R to the grouping fucntion.

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
	int n; cin >> n;
	vector<string> S(n);
	vector<vector<int>> freq(n, vector<int>(26, 0));
	for (int i = 0; i < n; i++) {
		cin >> S[i];
		for (int j = 0; j < S[i].length(); j++) {
			freq[i][S[i][j] - 'a']++;
		}
		if (i != 0) {
			for (int j = 0; j < 26; j++) {
				freq[i][j] += freq[i - 1][j];
			}
		}
	}
	int q; cin >> q;
	for (int i = 0; i < q; i++) {
		int L, R, K; cin >> L >> R >> K;
		L--, R--;
		vector<int> curr_freq = freq[R];
		bool done = false;
		if (L > 0) {
			for (int j = 0; j < 26; j++) {
				curr_freq[j] -= freq[L - 1][j];
			}
		}
		for (int j = 0; j < 26; j++) {
			if (K > curr_freq[j]) {
				K -= curr_freq[j];
			} else {
				cout << char('a' + j) << nl;
				break;
			}
		}
	}
	return 0;
}