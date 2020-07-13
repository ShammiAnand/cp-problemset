//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define Max(a,b,c)      max(a,max(b,c))
#define pb              push_back
#define mp              make_pair
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
		ll n; cin >> n;
		vector <ll> ax, ay;
		// 4*n -1 pairs to take input
		map <ll, ll> X, Y;
		for (int i = 0; i < 4 * n - 1; i++) {
			int x, y; cin >> x >> y;
			ax.pb(x);
			ay.pb(y);
			X[x]++;
			Y[y]++;
		}
		ll req_x, req_y;
		bool d1 = false, d2 = false;
		for (int i = 0; i < ax.size(); i++) {
			if (X[ax[i]] & 1) {
				req_x = ax[i];
				d1 = true;
			}
			if (Y[ay[i]] & 1) {
				req_y = ay[i];
				d2 = true;
			}
			if (d1 && d2) break;
		}
		cout << req_x << " " << req_y << nl;
	}
	return 0;
}