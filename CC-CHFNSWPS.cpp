//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define Max(a,b,c)      max(a,max(b,c))
#define pb              push_back
#define mp              make_pair
#define f              	first
#define s              	second
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
		ll mn = mod;
		ll n, ans = 0; cin >> n;
		map <ll, pair<ll, ll> > freq;
		for (int i = 0; i < n; i++) {
			ll a; cin >> a;
			mn = min(mn, a);
			freq[a].f++;
		}
		for (int i = 0; i < n; i++) {
			ll b; cin >> b;
			freq[b].s++;
			mn = min(mn, b);
		}
		vector < ll > A, B;
		bool possible = true;
		for (auto check : freq) {
			if ((check.s.f + check.s.s) % 2 == 1) {
				possible = false;
				continue;
			}
			if (abs(check.s.f - check.s.s) > 0) {
				if (check.s.f > check.s.s) {
					int num = abs(check.s.f - check.s.s) / 2;
					fill_n(back_inserter(A), num, check.f);
				} else {
					int num = abs(check.s.f - check.s.s) / 2;
					fill_n(back_inserter(B), num, check.f);
				}
			}
		}
		if (!possible) {
			cout << -1 << nl;
			continue;
		}


		//debugging :
		// cout << "A : ";
		// for (auto x : A) cout << x << " ";
		// cout << nl;
		// cout << "B : ";
		// for (auto x : B) cout << x << " ";
		// cout << nl;



		ll len = A.size();
		for (int i = 0; i < len; i++) {
			ans += min(mn * 2, min(A[i], B[len - i - 1]));
			A[i] = 0;
			B[len - i - 1] = 0;
		}
		cout << ans << nl;
	}
	return 0;
}