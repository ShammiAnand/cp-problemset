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
	int n; cin >> n;
	vector<pair<int, int>> iamsmart;
	for (int i = 0; i < n; i++) {
		int stupidnumber; cin >> stupidnumber;
		iamsmart.pb({stupidnumber % 2, i + 1});
	}
	sort(iamsmart.begin(), iamsmart.end());
	if (iamsmart[0].f == iamsmart[1].f) {
		cout << iamsmart[n - 1].s << nl;
	} else cout << iamsmart[0].s << nl;
	return 0;
}