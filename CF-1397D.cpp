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
		int n; cin >> n;
		int H[n];
		int selected[n];
		memset(selected, 0, sizeof(selected));

		for (int i = 0; i < n; i++) {
			cin >> H[i];
		}
		sort(H, H + n, greater<int>());
		int winner = 1; // 1:T , -1:HL
		while (true) {
			int idx;
			bool success = false;
			for (int i = 0; i < n; i++) {
				if (H[i] > 0 && selected[i] == 0) {
					H[i]--;
					memset(selected, 0, sizeof(selected));
					selected[i] = -1;
					success = true;
					winner *= -1;
				} else continue;
			}
			if (success) {
				continue;
			} else {
				// cout << puts(winner * -1 ? "T" : "HL") << nl;
				if (winner == 1) cout << "HL\n";
				else cout << "T\n";
				break;
			}
		}
		// }
	}
	return 0;
}