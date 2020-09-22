/*
This code is written by Shammi Anand
contact : shammianand101@gmail.com, shammianand.me
*/
#include<bits/stdc++.h>
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

bool isDivisivle(string num) {
	int n = 0;
	for (int i = 0; i < num.length(); i++) {
		n += (num[i] - '0') * pow(10, (num.length() - i - 1));
	}
	return (n % 8 == 0);
}


int main() {
	shammi();
	string num, ans; cin >> num;
	int n = num.length();
	if (n >= 3) {
		bool found = false;
		rep(i, 0, n) {
			found = false;
			string one = "";
			one += num[i];
			if (isDivisivle(one)) {
				found = true;
				ans = one;
				break;
			}
			rep(j, i + 1, n) {
				found = false;
				string two = ""; two += num[i], two += num[j];
				if (isDivisivle(two)) {
					found = true;
					ans = two;
					break;
				}
				rep(k, j + 1, n) {
					string three = ""; three += num[i], three += num[j], three += num[k];
					if (isDivisivle(three)) {
						found = true;
						ans = three;
						break;
					}
				}
				if (found) break;
			}
			if (found) break;
		}
		if (found) cout << "YES\n" << ans << nl;
		else cout << "NO\n";
	} else {
		if (n == 1) {
			if ((num[0] - '0') % 8 == 0) cout << "YES\n" << num << nl;
			else cout << "NO\n";
		} else {
			if (isDivisivle(num)) cout << "YES\n" << num << nl;
			else {
				if ((num[0] - '0') % 8 == 0) {
					cout << "YES\n" << num[0] << nl;
				} else if ((num[1] - '0') % 8 == 0) {
					cout << "YES\n" << num[1] << nl;
				} else {
					cout << "NO\n";
				}
			}
		}
	}
	return 0;
}