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
		string A, B; cin >> A >> B;
		ll n; cin >> n;
		vector < pair < ll ,  string> > scores;
		vector < string > subsA, subsB, subsC;
		for (ll i = 0; i < n; i++) {
			string wrd; ll scr;
			cin >> wrd >> scr;
			scores.pb({scr, wrd});
		}
		sort(scores.begin(), scores.end());
		for (ll len = 1; len <= A.length(); len++) {
			for (ll i = 0; i <= A.length() - len; i++) {
				ll j = i + len - 1;
				subsA.pb(A.substr(i, j + 1));
			}
		}
		for (ll len = 1; len <= B.length(); len++) {
			for (ll i = 0; i <= B.length() - len; i++) {
				ll j = i + len - 1;
				subsB.pb(B.substr(i, j + 1));
			}
		}

		// all possible substrings from concatenation of A and B
		for (ll i = 0; i < subsA.size(); i++) {
			for (ll j = 0; j < subsB.size(); j++) {
				string C;
				// find if the concatenated string has the most beautiful string;
				C = subsA[i] + subsB[j];
				// size_t found = C.find(scores[scores.size() - 1].second);
				// subsC will only contain those substrings that have the
				// if (found != string::npos)
				subsC.pb(C);
			}
		}
		// final logic of the code:
		ll curr_score = 0, mx = 0;
		for (ll i = 0; i < subsC.size(); i++) {
			curr_score =  0;
			for (ll j = 0; j < scores.size(); j++) {
				size_t found = subsC[i].find(scores[j].second);
				if (found != string::npos) {
					curr_score += scores[j].first;
					while (true) {
						string word = scores[j].second;
						// char arr[] = word;
						found = subsC[i].find(word, found + 1);
						if (found != string::npos) curr_score += scores[j].first;
						else break;
					}
				} else continue;
			}
			mx = max(mx, curr_score);
		}
		cout << mx << nl;
	}
	return 0;
}