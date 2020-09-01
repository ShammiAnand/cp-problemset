//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define rep(i, n)       for (int i = 0; i < (n); i++)
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
const int N = 6001;
int a, b, c;
int dp[N];


int solve(int n) {
	if (n == 0) {
		return 0;
	}

	if (dp[n] != -1) return dp[n];
	dp[n] = -INF;
	for (int size : {a, b, c}) {
		if (n >= size) {
			dp[n] = max(dp[n], 1 + solve(n - size));
		}
	}

	return dp[n];
}

int bruteForce(int n) {
	//ax + by + cz = n -> max(x+y+z)
	int ans = 0;
	for (int x = 0; x <= n; x++) {
		for (int y = 0; y <= n; y++) {
			int cz = (n - ((a * x) + (b * y)));
			if (cz >= 0 && cz % c == 0) {
				int z = cz / c;
				ans = max(ans, x + y + z);
			}
		}
	}
	return ans;
}


int main() {
	memset(dp, -1, sizeof(dp));
	shammi();
	int n; cin >> n >> a >> b >> c;
	cout << solve(n) << nl;
	// cout << bruteForce(n) << nl;
	return 0;
}