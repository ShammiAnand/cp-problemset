#include<bits/stdc++.h>
using namespace std;

#define int          long long
#define mod          1000000007
#define gcd(a,b)     __gcd(a,b)
#define lcm(a,b)     (a*b)/gcd(a,b)
#define vector       vector<int>
#define vectorp      vector<pair<int,int>>
#define fast         ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int32_t main() {
	int t;
	cin >> t;
	map<char, int>mp, mp1;
	for (int i = 0 ; i < 26 ; i++ ) {
		mp['a' + i] = i;
	}
	for (int i = 0 ; i < 26 ; i++ ) {
		mp[i] = 'a' + i;
	}
	while (t--)
	{
		string s;
		cin >> s;
		int sum = 0;
		int n = s.size();
		for (int i = 0 ; i < n ; i++ ) {
			sum += mp[s[i]];
		}
		if (sum == (25 * n) || sum == 0 || n == 1) {
			cout << sum << ' ' << "-1" << '\n';
		}
		else if (sum <= 25)
		{
			string res(n, 'a');
			res[n - 1] = mp[sum];
			if (res == s) {
				res[n - 1] = mp[sum - 1];
				res[n - 2] += 1;
			}
			cout << sum << ' ' << res << '\n';
		}
		else {
			string res(n, 'a');
			int total = 0;
			int pos = -1;
			for (int i = n - 1 ; i >= 0 ; i--) {
				if ((total + 25) <= sum) {
					res[i] = 'z';
					total += 25;
				}
				else {
					pos = i;
					break;
				}
			}
			int diff = sum - total;
			res[pos] = 'a' + diff;
			if (res == s) {
				for (int i = 0 ; i < n ; i++) {
					if (res[i] == 'z') {
						res[i] = 'y';
						res[i - 1] += 1;
						break;
					}
				}
			}
			cout << sum << ' ' << res << '\n';
		}
	}
	return 0;
}