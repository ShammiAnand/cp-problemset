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

		ll n, c, k; cin >> n >> c >> k;

		map <ll, pair<ll, vector<ll> > > mp;

		pair<ll, ll> freq[c];
		for (ll i = 0; i < c; i++) {
			freq[i] = {0, (i + 1)};
		}

		for (int i = 0; i < n; i++) {
			ll a, b, c; cin >> a >> b >> c;
			mp[c].f++;
			mp[c].s.pb(a);
			mp[c].s.pb(b);
			freq[c - 1].f++;
		}
		sort(freq, freq + c); reverse(freq, freq + c);
		ll V[c + 1] = {0};
		// vector <pair <ll, ll> > V;
		for (int i = 1; i <= c; i++) {
			// ll v; cin >> v;
			// V.pb({v, i});
			cin >> V[i];
		}
		ll Vf = V[1];
		// sort(V.begin(), V.end());
		ll total = 0;
		// for (auto elem : mp) {
		// 	cout << elem.f << " " << elem.s.f << nl;
		// }

//-------------------------------------sol for 15pts------------------------------------------------!

		for (int i = 0; i < c; i++) {
			ll fr = freq[i].f;
			cout << freq[i].s << " " << fr << nl;
			if (fr >= 3) {
				if (k < V[freq[i].s]) {
					total += (fr * (fr - 1) * (fr - 2)) / 6;
				} else {
					while (fr > 0 && (k - V[freq[i].s]) >= 0) {
						k -= V[freq[i].s];
						fr--;
					}
					if (fr >= 3) {
						total += (fr * (fr - 1) * (fr - 2)) / 6;
					}
				}
			}
		}



//----------------------------------less Optimal Sol -------------------------------------!
		// for (auto elem : mp) {
		// 	if (elem.s.f >= 3) {
		// 		// cout << elem.f << " " << elem.s.f << nl;
		// 		ll fr = elem.s.f;
		// 		ll curr = (fr * (fr - 1) * (fr - 2)) / 6;
		// 		if (k < V[elem.f]) {
		// 			total += curr;
		// 		} else {
		// 			ll freq = elem.s.f;
		// 			ll count = 0;
		// 			while (freq > 0 && (k - V[elem.f]) >= 0) {
		// 				// cout << "Value of K = " << k << nl;
		// 				k -= V[elem.f];
		// 				count++;
		// 				freq--;
		// 			}
		// 			fr -= count;
		// 			if (fr >= 3) {
		// 				curr = (fr * (fr - 1) * (fr - 2)) / 6;
		// 				total += curr;
		// 			}
		// 		}
		// 	} else continue;
		// }
// --------------------------------More Optimal Sol--------------------------------------!
		// for (auto elem : V) {
		// 	ll fr = mp[elem.s].f;
		// 	// cout << elem.s << " " << fr << nl;
		// 	if (fr >= 3) {
		// 		if (k < elem.f) {
		// 			total += ((fr * (fr - 1) * (fr - 2)) / 6);
		// 		} else {
		// 			ll count = 0;
		// 			while (fr > 0 && (k - elem.f) >= 0) {
		// 				// cout << "Value of K = " << k << nl;
		// 				k -= elem.f;
		// 				count++;
		// 				fr--;
		// 			}
		// 			// cout << "Freq = " << fr << nl;
		// 			// cout << "Remaining K = " << k << nl;
		// 			// fr -= freq;
		// 			// cout << "Current Freq = " << freq << nl;
		// 			if (fr >= 3) {
		// 				total += ((fr * (fr - 1) * (fr - 2)) / 6);
		// 			}
		// 		}
		// 	} else continue;
		// }
		// cout << "Answer = ";
		cout << total << nl;
	}
	return 0;
}