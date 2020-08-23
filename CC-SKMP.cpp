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
		int freq[26] = {0}, pat_freq[26] = {0};
		for (int i = 0; i < s.length(); i++) {
			freq[s[i] - 'a']++;
		}
		for (int i = 0; i < p.length(); i++) {
			pat_freq[p[i] - 'a']++;
			freq[p[i] - 'a']--;
		}
		string new_str = "";
		for (int i = 0; i < s.length(); i++) {
			if (freq[s[i] - 'a'] > 0) {
				new_str += s[i];
				freq[s[i] - 'a']--;
			}
		}
		sort(new_str.begin(), new_str.end());
		// cout << "New String : " << new_str << nl;
		int counter = 0;
		string ans = "";
		bool done = false;
		for (int i = 0; i < new_str.length(); i++) {
			if (done) {
				ans += new_str[i];
				continue;
			}
			if (new_str[i] < p[counter] && !done) {
				while (new_str[i] < p[counter] && i < new_str.length()) {
					ans += new_str[i];
					i++;
				}
				if (i == new_str.length()) {
					ans += p;
					done = true;
					break;
				}
				if (new_str[i] > p[counter]) ans += p;
				else {
					//equal
					int count = 0;
					while (p[counter + count] == new_str[i] && counter + count < p.length()) count++;
					if (counter + count == p.length()) {
						ans += p; //try bb
					} else {
						if (p[counter + count] < new_str[i]) {
							ans += p;
						} else {
							ans += new_str[i];
							continue;
						}
					}
				}
				done = true;
				ans += new_str[i];
				continue;
			}
			if (new_str[i] > p[counter] && !done) {
				ans += p;
				ans += new_str[i];
				done = true;
				continue;
			}
			if (new_str[i] == p[counter] && !done) {
				while (new_str[i] == p[counter] && i < new_str.length()) {
					ans += new_str[i];
					i++;
				}
				ans += p;
				done = true;
				i--;
				continue;
			}
		}
		if (!done) ans += p;
		cout << ans << nl;
	}
	return 0;
}