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

const int mxN = 101;
int boys[mxN], girls[mxN], freqB[mxN], freqG[mxN];

int main() {
	shammi();

	memset(freqB, 0, sizeof(freqB));
	memset(freqG, 0, sizeof(freqG));

	int n, m; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> boys[i];
		freqB[boys[i]]++;
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> girls[i];
		freqG[girls[i]]++;
	}

	sort(boys, boys + n);
	sort(girls, girls + m);
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (abs(boys[i] - girls[j]) < 2) {
				ans++;
				girls[j] = 1000;
				break;
			}
		}
	}
	cout << ans << nl;
	return 0;
}