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
	shammi();
	int n, m; cin >> n >> m;
	int games[n], bills[m];
	for (int i = 0; i < n; i++) cin >> games[i];
	for (int i = 0; i < m; i++) cin >> bills[i];

	int counter = 0, count = 0;
	for (int i = 0; i < n; i++) {
		if (counter == m) break;
		if (bills[counter] >= games[i]) {
			count++, counter++;
		} else {
			continue;
		}
	}
	cout << count << nl;
	return 0;
}