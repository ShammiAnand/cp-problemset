//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll             	long long
#define Max(a,b,c)		max(a,max(b,c))
#define pb              push_back
#define mp              make_pair
#define mod             1000000007
#define nl				"\n"
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
		int arr[n];
		int odd = 0, even = 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			if (i % 2 != arr[i] % 2) {
				if (i % 2) odd++;
				else even ++;
			}
		}
		if (odd != even) cout << -1 << nl;
		else cout << odd << nl;
	}
	return 0;
}