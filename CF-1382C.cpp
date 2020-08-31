//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define mp              make_pair
#define f               first
#define s               second
#define mod             1000000007
#define INF             1e9+7
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
		int n;
		string x;
		cin >> n >> x;
		string a(n, '0'), b(n, '0');
		for (int i = 0; i < n; ++i) {
			if (x[i] == '1') {
				a[i] = '1';
				b[i] = '0';
				for (int j = i + 1; j < n; ++j) {
					b[j] = x[j];
				}
				break;
			} else {
				a[i] = b[i] = '0' + (x[i] - '0') / 2;
			}
		}
		cout << a << nl << b << nl;
	}
	return 0;
}