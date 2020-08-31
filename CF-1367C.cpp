//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll             	long long
#define Max(a,b,c)		max(a,max(b,c))
#define pb              push_back
#define mp              make_pair
#define mod             1000000007
#define nl				"\n"
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
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;

		int res = 0;

		for (int i = 0; i < n;) {
			int j = i + 1;

			for (; j < n && s[j] != '1'; j++);

			int left = s[i] == '1' ? k : 0;
			int right = j < n && s[j] == '1' ? k : 0;
			int len = j - i;

			if (left == k) {
				len--;
			}

			len -= left + right;

			if (len > 0) {
				res += (len + k) / (k + 1);
			}

			i = j;
		}

		cout << res << endl;
	}
	return 0;
}