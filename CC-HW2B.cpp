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
	int n; cin >> n;
	int arr[n], ac_freq[201] = {0}, freq[201] = {0}, index[201] = {0};
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		freq[arr[i]]++;
		ac_freq[arr[i]]++;
		// index[arr[i]] = i;
	}
	int count = 0, mx = 0;
	for (int i = 2; i <= 200; i++) {
		count = 0;
		// vector <pair <int, int> > indices;
		for (int k = 0; k < n; k++) freq[arr[k]] = ac_freq[arr[k]];
		for (int j = 0; j < n; j++) {
			if (freq[arr[j]] > 0) {
				if (arr[j] >= i) continue;
				else {
					if (freq[i - arr[j]] > 0) {
						if (i == 2 * arr[j] && freq[arr[j]] <= 1) continue;
						else {
							freq[arr[j]]--, freq[i - arr[j]]--, count++;
							// indices.pb({j + 1, index[i - arr[j]] + 1});
						}
					}
				}
			} else continue;
		}
		mx = max(mx, count);
		if (mx == n / 2) {
			int ans = i;
			for (int p = 0; p < n; p++) {
				for (int q = 0; q < n; q++) {
					if (p == q) continue;
					if (arr[p] + arr[q] == ans) {
						cout << p + 1 << " " << q + 1 << nl;
						arr[p] = -200;
						arr[q] = -200;
						break;
					}
				}
			}
			break;
		}
	}
	return 0;
}