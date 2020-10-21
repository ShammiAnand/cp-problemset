/*
This code is written by Shammi Anand
contact : shammianand101@gmail.com, shammianand.me
*/
#include<bits/stdc++.h>
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

int solve(string S) {
	int ans = 0;
	for (int i = 0; i < S.length(); i++) {
		if (ans && S[i] == 'B') ans--;
		else ans++;
	}
	return ans;
}

int main() {
	shammi();
	w(t) {
		string S, ans = ""; cin >> S;
		bool skip = false;
		// for (int i = 0; i < S.length(); i++) {
		// 	if (skip) {
		// 		skip = false;
		// 		continue;
		// 	}
		// 	if (i + 1 == S.length()) {
		// 		if (S[i] == 'A') ans += S[i];
		// 		else {
		// 			if (ans.length() == 0) {
		// 				ans += S[i];
		// 			} else {
		// 				ans.erase(ans.length() - 1);
		// 			}
		// 		}
		// 	} else {
		// 		if (S[i] == 'A') {
		// 			if (S[i + 1] == 'A') {
		// 				ans += S[i];
		// 			}
		// 			else {
		// 				skip = true;
		// 			}
		// 		} else {
		// 			if (S[i + 1] == 'A') {
		// 				if (ans.length() == 0) {
		// 					ans += S[i];
		// 					// cout << ans << nl;
		// 				} else {
		// 					ans.erase(ans.length() - 1);
		// 				}
		// 			}
		// 			else {
		// 				skip = true;
		// 			}
		// 		}
		// 	}
		// }
		// cout << ans << nl;
		// cout << ans.length() << nl;
		cout << solve(S) << nl;
	}
	return 0;
}