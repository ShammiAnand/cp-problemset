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
	w(t) {
		int n; cin >> n;
		int arr[n], weight[101] = {0}, freq[101] = {0}, ac_freq[101] = {0};
		int mxa = 0;
		// map <int, int> ac_freq;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			freq[arr[i]]++;
			ac_freq[arr[i]]++;
			mxa = max(mxa, arr[i]);
		}
		// bool selected[50] = {0};
		int count = 0, mx = 0;
		for (int i = 2; i <= 100; i++) { // all possible weights;
			for (int k = 0; k < n; k++) freq[arr[k]] = ac_freq[arr[k]];
			count = 0;
			for (int j = 0; j < n; j++) {
				if (freq[arr[j]] >= 1) {
					if (arr[j] >= i) continue;
					else {
						if (freq[i - arr[j]] > 0) {
							if (i == 2 * arr[j] && freq[arr[j]] < 2) {
								continue;
							}
							freq[arr[j]]--; freq[i - arr[j]]--;
							count++;
						} else continue;
					}
				} else continue;
			}
			mx = max(mx, count);
			if (mx == n / 2) break;
		}
		cout << mx << nl;
	}
	return 0;
}