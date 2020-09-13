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

	int x1, x2, y1, y2, x3, x4, y3, y4; cin >> x1 >> y1 >> x2 >> y2;
	if (x1 == x2) {
		int dist = abs(y1 - y2);
		if (x1 + dist <= 1000) cout << x1 + dist << " " << y1 << " " << x1 + dist << " " << y2 << nl;
		else cout << x1 - dist << " " << y1 << " " << x1 - dist << " " << y2 << nl;
		return 0;
	}
	if (y1 == y2) {
		int dist = abs(x1 - x2);
		if (y1 + dist <= 1000) cout << x1 << " " << y1 + dist << " " << x2 << " " << y2 + dist << nl;
		else cout << x1 << " " << y1 - dist << " " << x2 << " " << y2 - dist << nl;
		return 0;
	}

	if (abs(x2 - x1) != abs(y2 - y1)) {
		cout << -1 << nl;
		return 0;
	} else {
		cout << x2 << " " << y1 << " " << x1 << " " << y2 << nl;
		return 0;
	}
	return 0;
}