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
		ll n, k, count = 0; cin >> n >> k;
		ll P[n + 1], index[n + 1];
		for (ll i = 1; i <= n; i++) {
			cin >> P[i];
			// storing the current index of all the elems:
			index[P[i]] = i;
		}
		ll x, y, z, temp;
		bool flag = true;
		vector < vector <ll> > triplets;
		for (ll i = 1; i <= n; i++) {
			if (P[i] != i) {
				// x is the current un-sorted elem
				x = i;
				// z is the correct of that elem
				z = index[x];
				// y will be any pos of unsorted elem
				y = -1;
				if (index[z] != x) {
					y = index[z];
				} else {
					for (ll j = n; j >= x + 1; j--) {
						if (P[j] != j && j != z) {
							y = j;
							break;
						}
					}
				}
				// if there are no more unsorted position than x & y
				if (y == -1) {
					flag = false;
					// break;
				} else {
					// if there are:
					// update the indices of the index array
					index[x] = x;
					index[P[x]] = y;
					index[P[y]] = z;
					// insert the pair:
					triplets.pb({x, y, z});

					// right cycle shif the elems
					P[z] = P[y];
					P[y] = P[x];
					P[x] = x;
				}
			}
			// if any of the requirements are not meant, break;
			if (!flag || k < triplets.size()) {
				flag = false;
				break;
			}
		}

		// check for requirements:
		if (!flag) cout << -1 << nl;
		else {

			// for (ll i = 1; i <= n; i++) cout << P[i] << " ";
			// cout << nl;

			// print the triplets:
			cout << triplets.size() << nl;
			for (ll i = 0; i < triplets.size(); i++) {
				// no need to sort the triplets;
				// sort(triplets[i].begin(), triplets[i].end());
				cout << triplets[i][0] << " " << triplets[i][1] << " " << triplets[i][2] << nl;
			}
		}

	}
	return 0;
}