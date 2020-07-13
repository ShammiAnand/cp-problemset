#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define mod 1000000007

void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

ll Keys[26] = {0};

int main() {
	shammi();
	ll n; cin >> n;
	string s; cin >> s;
	ll count = 0;
	for (ll i = 0; i < (2 * n - 2); i++) {
		if (i % 2 == 0) {
			Keys[s[i] - 'a']++;
		} else {
			if (Keys[s[i] - 'A'] > 0) {
				Keys[s[i] - 'A']--;
			} else count++;
		}
	}
	cout << count << endl;
	return 0;
}