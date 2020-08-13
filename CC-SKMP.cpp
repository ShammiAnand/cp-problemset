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
	// shammi();
	w(t) {
		string s, p; cin >> s >> p;
		// cout << s << nl << p << nl;
		int freq[26] = {0}; int pat_freq[26] = {0};
		for (int i = 0; i < s.length(); i++) freq[s[i] - 'a']++;
		string ans;
		for (int i = 0; i < p.length(); i++) freq[p[i] - 'a']--, pat_freq[p[i] - 'a']++;
		sort(s.begin(), s.end());
		cout << "Current String : " << s << nl;
		int counter = 0;
		for (int i = 0; i < s.length(); i++) {
			while (pat_freq[p[counter] - 'a'] == 0 && counter < p.length()) counter++;
			if (s[i] <= p[counter] && freq[s[i] - 'a'] > 0) {
				// ans += s[i];
				ans.pb(s[i]);
				freq[s[i] - 'a']--;
			} else {
				if (s[i] > p[counter]) {
					// ans += p[counter];
					ans.pb(p[counter]);
					pat_freq[p[counter] - 'a']--;
					if (counter < p.length() - 1) counter++;
					continue;
				}
				if (freq[s[i] - 'a'] == 0) {
					//it is from the pattern
					if (s[i] < p[counter] && pat_freq[s[i] - 'a'] > 0) {
						// ans += s[i];
						ans.pb(s[i]);
						pat_freq[s[i] - 'a']--;
						continue;
					}
					if (s[i] > p[counter] && pat_freq[s[i] - 'a'] > 0) {
						// ans += p[counter];
						ans.pb(p[counter]);
						pat_freq[p[counter] - 'a']--;
						if (counter < p.length() - 1) counter++;
						continue;
					}
					if (s[i] == p[counter] && pat_freq[s[i] - 'a'] > 0) {
						// ans += p[counter];
						ans.pb(p[counter]);
						pat_freq[p[counter] - 'a']--;
						if (counter < p.length() - 1) counter++;
						continue;
					}
				}
			}
		}
		int n = p.length();
		if (counter < n - 1) {
			while (counter <= n - 1) {
				ans.pb(p[counter++]);
			}
		}
		cout << ans << nl;
	}
	return 0;
}