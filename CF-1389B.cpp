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
	shammi();
	w(t) {
		int n, k, z; cin >> n >> k >> z;
		int A[n];
		for (int i = 0; i < n; i++) {
			cin >> A[i];
		}
		int final = 0;
		for (int i = 0; i <= z; i++) {
			int pos = k - 2 * i;
			if (pos < 0) {
				continue;
			}
			int mx = 0, ans = 0;
			for (int j = 0; j <= pos; j++) {
				ans += A[j];
				if (j < n - 1) mx = max(mx, A[j] + A[j + 1]);
			}
			ans += mx * i;
			final = max(final, ans);
		}
		cout << final << nl;
	}
	return 0;
}