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
		int n, k; cin >> n >> k;
		int F[n];
		for (int i = 0; i < n; i++) {
			cin >> F[i];
		}
		bool first = true;
		int cost = 0;
		int selected[101] = {0};
		if (k == 1) {
			for (int i = 0; i < n; i++) {
				if (first) {
					first = false;
					selected[F[i]]++;
					cost = k;
				} else {
					if (selected[F[i]] > 0) {
						if (selected[F[i]] + 1 <= k) {//can be selected
							if (selected[F[i]] == 1) cost += 2;
							else cost++;
							selected[F[i]]++;
						} else {
							cost += k;
							for (int i = 0; i <= 100; i++) selected[i] = 0;
							selected[F[i]]++;

						}
					} else { //not present on table
						selected[F[i]]++;
					}
				}
			}
		} else {
			// cost = k;
			int cnt[101] = {0};
			for (int i = 0; i < n; i++) {
				cnt[F[i]]++;
			}
			int sum = 0;
			for (int i = 1; i <= 100; i++) if (cnt[i] > 1) sum += cnt[i];

			cost = k;
			selected[F[0]]++
			for (int i = 1; i < n; i++) {
				if (selected[F[i]] == 0) {
					selected[F[i]]++
				} else {

				}
			}

		}
		cout << cost << nl;
	}
	return 0;
}