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
		int n, x, y; cin >> n >> x >> y;
		int ans = -1;

		if (n == 2) {
			cout << x << " " << y << nl;
			continue;
		}
		bool found = false, print = false;
		int last = 0;
		for (int i = 50; i >= 1; i--) {
			found = false;
			if (y - i <= 0) continue;
			for (int j = i, count = 0; count < n; count++) {
				last = y - (j * count);
				if (y - (j * count) < 0) {
					found = false;
					break;
				}
				if (y - (j * count ) == x) {
					found = true;
				}
			}
			if (found && last > 0) {
				for (int j = i, count = 0; count < n; count++) {
					cout << y - (j * count) << " ";
				}
				cout << nl;
				print = true;
				break;
			}
		}
		bool af = false, bf = false;
		if (!print) {

			for (int i = 1; i <= 50; i++) {
				af = false, bf = false;
				for (int j = 1; j <= x; j++) {
					af = false, bf = false;
					for (int z = j, count = 0; count < n; count++) {
						if (z + (i * count) == x) {
							af = true;
						}
						if (z + (i * count) == y) {
							bf = true;
						}
					}
					if (af && bf) {
						for (int z = j, count = 0; count < n; count++) {
							cout << z + (i * count) << " ";
						}
						cout << nl;
						break;
					}
				}
				if (af && bf) {
					break;
				}
			}
		}
	}
	return 0;
}