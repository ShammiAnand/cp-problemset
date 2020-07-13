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
		bool flag = false;
		for (int i = 0; i < S.length() - 1; i++) {
			if (S[i] == '?') continue;

			if (S[i] == S[i + 1]) {
				flag = true;
				break;
			}
		}
		if (flag) {
			cout << -1 << nl;
			continue;
		}
		for (int i = 0; i < S.length() - 1; i++) {
			if (S[i] == '?') {
				if (i == 0) {
					if (S[i + 1] == '?') {
						S[i] = 'a';
						continue;
					} else {
						if (S[i + 1] == 'a' || S[i + 1] == 'c') S[i] = 'b';
						else if (S[i + 1] == 'b' || S[i + 1] == 'c') S[i] = 'a';
						else S[i] = 'c';
					}
				} else {
					if ((S[i - 1] == 'a' && S[i + 1] == 'c') || (S[i - 1] == 'c' && S[i + 1] == 'a') || (S[i - 1] == 'a' && S[i + 1] == 'a') || (S[i - 1] == 'c' && S[i + 1] == 'c')) S[i] = 'b';
					else if ((S[i - 1] == 'b' && S[i + 1] == 'c') || (S[i - 1] == 'c' && S[i + 1] == 'b') || (S[i - 1] == 'b' && S[i + 1] == 'b')) S[i] = 'a';
					else if ((S[i - 1] == 'a' && S[i + 1] == 'b') || (S[i - 1] == 'b' && S[i + 1] == 'a')) S[i] = 'c';
					else if ((S[i - 1] == 'a' && S[i + 1] == '?')) S[i] = 'b';
					else if ((S[i - 1] == 'c' && S[i + 1] == '?')) S[i] = 'b';
					else if ((S[i - 1] == 'b' && S[i + 1] == '?')) S[i] = 'a';
				}
			}
		}
		if (S[S.length() - 1] == '?') {
			if (S[S.length() - 2] == 'a' || S[S.length() - 2] == 'b') S[S.length() - 1] = 'c';
			else S[S.length() - 1] = 'a';
		}
		cout << S << nl;
	}
	return 0;
}