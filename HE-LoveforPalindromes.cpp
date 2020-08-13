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
bool isPalindrome(string s) {
	for (int i = 0; i < s.length() / 2; i++) {
		if (s[i] != s[s.length() - i - 1]) return false;
	}
	return true;
}
int main() {
	shammi();
	w(t) {
		string s; cin >> s;
		if (isPalindrome(s)) {
			cout << 0 << nl;
			continue;
		} else {
			int freq[26] = {0};
			for (int i = 0; i < s.length(); i++) freq[s[i] - 'a']++;
			bool all_dist = true;
			vector<int> sim; // for character occurences more than 1
			for (int i = 0; i < 26; i++) {
				if (freq[i] > 0) {
					if (freq[i] == 1) continue;
					else {
						all_dist = false;
						sim.pb(i);
						// cout << "checking : "  << char('a' + i) << nl;
					}
				}
			}
			if (all_dist) cout << -1 << nl;
			else {

				int cc = 0, mn = s.length() + 1;
				for (auto val : sim) {
					cc = 0;
					int curr_mn = s.length();
					bool first = true;
					for (int i = 0; i < s.length(); i++) {
						if (s[i] - 'a' == val) {
							if (first) {
								first = false;
								cc = 1;
								continue;
							}
							// cout << "count of " << s[i] << " = " << cc << nl;
							curr_mn = min(curr_mn, cc);
							cc = 1;
						} else cc++;
					}
					mn = min(curr_mn, mn);
					// cout << "Minimum = " << mn << nl;
				}
				cout << mn - 1 << nl;
			}
		}
	}
	return 0;
}