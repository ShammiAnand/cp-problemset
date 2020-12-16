/*
This code is written by Shammi Anand
contact : shammianand101@gmail.com, shammianand.live
*/
#include <bits/stdc++.h>

using namespace std;

#define ll              long long
#define pb              push_back
#define f               first
#define s               second
#define vi              vector<int>
#define pii             pair<int, int>
#define rep(i,a,n)      for(int i=a;i<n;i++)
#define F(i,n)          for(int i=0;i<n;i++)
#define all(a)          a.begin(), a.end()
#define INF             1e9+7
#define nl              "\n"
#define w(x)            int x; cin>>x; while(x--)

template<typename T_vector>
void output(const T_vector &v, int start = -1, int end = -1) {
	if (start < 0) start = 0;
	if (end < 0) end = int(v.size());
	cout << v.size() << nl;
	for (int i = start; i < end; i++) {
		cout << v[i] << (i < end - 1 ? ' ' : '\n');
	}
}

void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

inline ll ceil(ll a, int b = 2) {
	return (a % (ll)b == 0 ? (a / (ll)b) : (a / (ll)b) + 1);
}

bool comp(pii a, pii b) {
	if (a.f >= b.f) return true;
	else return false;
}

int main() {
	shammi();
	w(t) {
		ll n, W, total = 0; cin >> n >> W;
		vector<pii> w;
		F(i, n) {
			int weight; cin >> weight;
			// total += (ll) weight;
			w.pb({weight, i});
		}
		sort(all(w));
		bool possible = false;
		ll curr = 0, avg = ceil(W);
		vi ans;
		// // cout << "Average = " << avg << nl;
		// F(i, n) {
		// 	curr += w[i].f;
		// 	if (curr >= avg && curr <= W) {
		// 		ans.pb(w[i].s + 1);
		// 		possible = true;
		// 		break;
		// 	} else {
		// 		if (curr < avg) ans.pb(w[i].s + 1);
		// 		else break;
		// 	}
		// }
		// if (possible) {
		// 	if (n != 1) {
		// 		if (ans.size() == 1 || ans.size() == n) cout << -1 << nl;
		// 		else output(ans);
		// 	} else output(ans);
		// } else {
		// 	cout << -1 << nl;
		// }
		F(i, n) {
			if (w[i].f > W) continue;
			else {
				if (curr + w[i].f >= avg && curr + w[i].f <= W) {
					possible = true;
					ans.pb(i + 1);
					break;
				} else {
					if (curr + w[i].f < avg) {
						curr += w[i].f;
						ans.pb(i + 1);
					}
				}
			}
		}
		if (possible) output(ans);
		else cout << -1 << nl;
	}
	return 0;
}









