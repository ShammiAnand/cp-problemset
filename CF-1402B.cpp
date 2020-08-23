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
	w(t) {
		int x1, y1, z1; cin >> x1 >> y1 >> z1;
		int x2, y2, z2; cin >> x2 >> y2 >> z2;
		// cout << 2 * min(z1, y2) << nl;
		int ans = 2 * min(z1, y2);
		y1 = max(0, y1 - x2);
		z2 = max(0, z2 - x1);
		ans -= 2 * min(y1, z2);
		cout << ans << nl;
	}
	return 0;
}