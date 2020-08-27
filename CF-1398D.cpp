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

const int N = 205;
ll dp[N][N][N];
ll r[N], g[N], b[N];

ll MaxArea(int R, int G, int B) {
	if ((R == 0 && G == 0) || (R == 0 && B == 0) || (B == 0 && G == 0) || (R == 0 && B == 0 && G == 0)) {
		return 0;
	}
	// assert(R >= 0 && G >= 0 && B >= 0);
	if (dp[R][G][B] != -1) {
		return dp[R][G][B];
	}
	dp[R][G][B] = 0; //beacuse it's initially -1

	if (R > 0 && G > 0) {
		dp[R][G][B] = max(dp[R][G][B], MaxArea(R - 1, G - 1, B) + r[R] * g[G]);
	}
	if (R > 0 && B > 0) {
		dp[R][G][B] = max(dp[R][G][B], MaxArea(R - 1, G, B - 1) + r[R] * b[B]);
	}
	if (B > 0 && G > 0) {
		dp[R][G][B] = max(dp[R][G][B], MaxArea(R, G - 1, B - 1) + b[B] * g[G]);
	}
	return dp[R][G][B];
}


int main() {
	int R, G, B;
	cin >> R >> G >> B;
	for (int i = 1; i <= R; i++) {
		cin >> r[i];
	}
	for (int i = 1; i <= G; i++) {
		cin >> g[i];
	}
	for (int i = 1; i <= B; i++) {
		cin >> b[i];
	}
	sort(r + 1, r + R + 1);
	sort(g + 1, g + G + 1);
	sort(b + 1, b + B + 1);
	memset(dp, -1 , sizeof(dp));
	cout << MaxArea(R, G, B) << nl;
	return 0;
}