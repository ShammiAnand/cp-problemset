//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define Max(a,b,c)      max(a,max(b,c))
#define Min(a,b,c)      min(a,min(b,c))
#define pb              emplace_back
#define mp              make_pair
#define f               first
#define s               second
#define mod             1000000007
#define nl              "\n"
#define w(x)            int x; cin>>x; while(x--)

inline bool isPowerOfTwo(int x) {
	//O(v) -> v is the number of bits in the binary form of x
	return x && (!(x & (x - 1)));
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
	int n, l; cin >> n >> l;
	int lamps[n];
	for (int i = 0; i < n; i++) {
		cin >> lamps[i];
	}
	sort(lamps, lamps + n);
	double ans = 0;
	for (int i = 0; i < n - 1; i++) {
		(lamps[i + 1] - lamps[i]) > ans ? ans = lamps[i + 1] - lamps[i] : ans = ans;
	}
	ans = ans / 2;
	if (lamps[0] != 0) {
		lamps[0] > ans ? ans = lamps[0] : ans = ans;
	}
	if (lamps[n - 1] != l) {
		abs(l - lamps[n - 1]) > ans ? ans = abs(l - lamps[n - 1]) : ans = ans;
	}
	cout << fixed << setprecision(9) << ans << nl;
	return 0;
}