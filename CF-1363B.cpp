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
		string S; cin >> S;
		int num1 = 0, num0 = 0;
		for (int i = 0; i < S.length(); i++) {
			if (S[i] == '1') num1++;
			else num0++;
		}
		int ans = min(num1, num0);
		int fixed1 = 0, fixed0 = 0;
		for (int i = 0; i < S.length(); i++) {
			if (S[i] == '1') {
				fixed1++;
				num1--;
			} else {
				fixed0++;
				num0--;
			}
			ans = min(ans, fixed0 + num1);
			ans = min(ans, fixed1 + num0);
		}
		cout << ans << nl;
	}
	return 0;
}