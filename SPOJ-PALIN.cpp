/*
@author: Shammi Anand
@contact: shammianand101@gmail.com
@website: shammianand.live
*/

#include <bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define f               first
#define s               second
#define vi              vector<int>
#define pii             pair<int, int>
#define F(i,n)          for(int i=0;i<n;i++)
#define all(a)          a.begin(), a.end()
#define INF             1e9+7
#define nl              "\n"
#define w(x)            int x; cin>>x; while(x--)

template<typename T_vector>
void output(const T_vector &v, int start = -1, int end = -1) {
	if (start < 0) start = 0;
	if (end < 0) end = int(v.size());

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

bool all9s(string s) {
	for (char c : s) if (c != '9') return false;
	return true;
}

int main() {
	shammi();
	w(t) {
		ll n; cin >> n;
		string num = to_string(n);
		int len = num.length();
		if (all9s(num)) {
			string ans(len + 1, '0');
			ans[0] = '1', ans[len] = '1';
			cout << ans << nl;
			continue;
		}
		if (len == 1) {
			cout << num << nl;
			continue;
		}
		if (len & 1) {
			//odd case
			int i = (len / 2) - 1, j = (len / 2) + 1;
			while ((num[i] == num[j]) && i >= 0) {
				i--; j++;
			}
			if (i < 0 || j >= len) {
				//given num is palindrome
				// i = (len / 2) - 1, j = (len / 2) + 1;
				if (num[len / 2] == '9') {
					//figure this out
				} else {
					num[len / 2] = char(((num[len / 2] - '0') + 1) + '0');
				}
			} else {
				//it differs at i and j
				if ((num[i] - '0') > (num[j] - '0')) {
					while (i >= 0) {
						num[j] = num[i];
						j++, i--;
					}
				} else {
					int k = i, l = j;
					// cout << k << " " << l << nl;
					i = len / 2;
					// cout << i << " " << j << nl;
					if (num[i] == '9') {
						num[i] = '1';
					} else {
						num[i] = char(((num[i] - '0') + 1) + '0');
						// num[j] = char(((num[j] - '0') + 1) + '0');
					}
					// cout << "pos = " << k << nl;
					while (k >= 0) {
						num[l] = num[k];
						l++, k--;
					}

				}
			}
		} else {
			//even case
			int i = (len / 2) - 1, j = len / 2;
			while ((num[i] == num[j]) && i >= 0) {
				i--; j++;
			}
			// cout << i << " " << j << nl;
			if (i < 0 || j >= len) {
				//given num is palindrome
				i = (len / 2) - 1, j = len / 2;
				if (num[i] == '9') {
					//figure this out
				} else {
					num[i] = char(((num[i] - '0') + 1) + '0');
					num[j] = char(((num[j] - '0') + 1) + '0');
				}
			} else {
				//it differs at i and j
				if ((num[i] - '0') > (num[j] - '0')) {
					while (i >= 0) {
						num[j] = num[i];
						j++, i--;
					}
				} else {
					int k = i, l = j;
					// cout << k << " " << l << nl;
					i = (len / 2) - 1, j = len / 2;
					// cout << i << " " << j << nl;
					if (num[i] == '9') {
						num[i] = '1';
						num[j] = '1';
					} else {
						num[i] = char(((num[i] - '0') + 1) + '0');
						num[j] = char(((num[j] - '0') + 1) + '0');
					}
					// cout << "pos = " << k << nl;
					while (k >= 0) {
						num[l] = num[k];
						l++, k--;
					}

				}
			}
		}
		cout << num << nl;
	}
	return 0;
}