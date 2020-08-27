//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define Max(a,b,c)      max(a,max(b,c))
#define Min(a,b,c)      min(a,min(b,c))
#define pb              push_back
#define mp              make_pair
#define f               first
#define s               second
#define mod             1000000007
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
	// shammi();
	string S; cin >> S;
	ll freq[26] = {0};
	ll dp[26][26];
	memset(dp, 0, sizeof(dp));
	ll ans = 0;
	for (int i = 0; i < S.length(); i++) {
		int curr = S[i] - 'a';
		for (int j = 0; j < 26; j++) {
			dp[curr][j] += freq[j];
		}
		freq[curr]++;
	}
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < 26; j++) {
			ans = max(ans, dp[i][j]);
		}
	}
	for (int i = 0; i < 26; i++) ans = max(ans, freq[i]);
	cout << ans << nl;
}