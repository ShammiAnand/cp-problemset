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
		int n; cin >> n;
		vi a(n), freq(101, 0);
		for (int& elem : a) {
			cin >> elem;
			freq[elem]++;
		}
		int ans = 0, picked = 0;
		for (int i = 0; i <= 100; i++) {
			if (freq[i] == 0) {
				ans += i;
				break;
			}
		}
		for (int i = 0; i <= 100; i++) {
			if (freq[i] <= 1) {
				ans += i;
				break;
			}
		}
		cout << ans << nl;
	}
	return 0;
}