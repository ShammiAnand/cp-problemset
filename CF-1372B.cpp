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
		int mx = 0;
		for (int i = 2; i < n && i <= 100000; i++) {
			if (n % i == 0) {
				mx = i;
				break;
			}
		}
		if (mx == 0) {
			cout << 1 << " " << n - 1 << nl;
		} else {
			cout << n / mx << " " << n - (n / mx) << nl;
		}
	}
	return 0;
}