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
	int n; cin >> n;
	int A[n + 1];
	for (int i = 1; i <= n; i++) cin >> A[i];

	if (n == 1) {
		cout << "1 1\n" << -A[1] << nl;
		cout << "1 1\n0\n";
		cout << "1 1\n0\n";
		return 0;
	}
	cout << 1 << " " << n - 1 << nl;
	for (int i = 1; i <= n - 1; i++) {
		cout << 1LL * A[i]*(n - 1) << ((i + 1 == n) ? "\n" : " ");
	}
	cout << 1 << " " << n << nl;
	for (int i = 1; i <= n; i++) {
		cout << 1LL * (-1) * A[i]* n  << ((i == n) ? "\n" : " ");
	}
	cout << n << " " << n << nl;
	cout << 1LL * A[n]*(n - 1) << nl;
	return 0;
}