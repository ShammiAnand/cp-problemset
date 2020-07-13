#include<bits/stdc++.h>
using namespace std;

#define ll             	long long
#define pb              push_back
#define mp              make_pair
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define nl				"\n"
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(x)            ll x; cin>>x; while(x--)

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
		int grannies[n];
		for (int i = 0; i < n; i++) cin >> grannies[i];
		sort(grannies, grannies + n);
		// int i = 0;
		int guest = 1;
		//for (int i = 0; i < n; i++) cout << grannies[i] << " ";
		//cout << nl;
		for (int i = n - 1; i >= 0; i--) {
			if (grannies[i] <= i + 1) {
				guest += (i + 1);
				break;
			}
		}
		cout << guest << nl;
	}
	return 0;
}