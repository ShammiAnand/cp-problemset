//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define mp              make_pair
#define f               first
#define s               second
#define mod             1000000007
#define INF             1e9+7
#define nl              "\n"
#define w(x)            int x; cin>>x; while(x--)


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
		vector<string> S(n);
		for (int i = 0; i < n; i++) cin >> S[i];

		int freq[26];
		memset(freq, 0, sizeof(freq));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < S[i].length(); j++) {
				freq[S[i][j] - 'a']++;
			}
		}
		bool possible = true;
		for (int i = 0; i < 26; i++) {
			if (freq[i] > 0) {
				if (freq[i] < n) {
					possible = false;
					break;
				} else {
					if (freq[i] % n != 0) {
						possible = false;
						break;
					}
				}
			}
		}
		puts(possible ? "YES" : "NO");
	}
	return 0;
}