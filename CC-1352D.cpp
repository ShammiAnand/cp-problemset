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
		ll n; cin >> n;
		ll candies[n];
		for (ll i = 0; i < n; i++) {
			cin >> candies[i];
		}
		ll totalA = 0, totalB = 0, i = 0, j = n - 1, count = 0, prev = 0;
		totalA += candies[0];
		prev = candies[0];
		candies[0] = 0;
		ll turn = 1;
		i++;
		count++;
		while (prev > 0 && i < n && j > 0) {
			count++;
			if (turn == 1) {
				// count++;
				ll curr = 0;
				// Bob's Turn
				while (prev >= curr && j > 0) {
					// curr = 0;
					curr += candies[j];
					// prev -= candies[j];
					// totalB += candies[j];
					candies[j] = 0;
					j--;
				}
				turn *= -1;
				totalB += curr;
				if (curr <= prev) break;
				prev = curr;
			} else {
				// count++;
				ll curr = 0;
				//Alice's Turn
				while (prev >= curr && i < n) {
					// curr = 0;
					curr += candies[i];
					// prev -= candies[i];
					// totalA += candies[i];
					candies[i] = 0;
					i++;
				}
				totalA += curr;
				turn *= -1;
				if (curr <= prev) break;
				prev = curr;
			}
			if (i > j) break;
		}
		cout << count << " " << totalA << " " << totalB << nl;
	}
	return 0;
}