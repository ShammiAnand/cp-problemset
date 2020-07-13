#include<bits/stdc++.h>
using namespace std;

#define ll             long long
#define pb              push_back
#define mp              make_pair
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define nl				"\n"
#define ps(x,y)         fixed<<setprecision(y)<<x
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
	// enter a number:
	double n; cin >> n;
	double epsilon = 0.01, high = n, low = 0;
	double ans = (high + low) / 2;
	double count = 0;
	while (abs(pow(ans, 3) - n) > epsilon) {
		count++;
		if (pow(ans, 3) > n) {
			high = ans;
		} else {
			low = ans;
		}
		ans = (high + low) / 2;
	}
	cout << "The cube root of " << n << " is " << ans << nl;
	cout << "Calculated in " << count << " steps\n";
	return 0;
}