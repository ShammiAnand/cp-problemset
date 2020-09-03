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
		int matrix[n][n];
		memset(matrix, 0, sizeof(matrix));
		string S[n];
		for (int i = 0; i < n; i++) {
			cin >> S[i];
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				matrix[i][j] = S[i][j] - '0';
				// cout << matrix[i][j] << " ";
			}
			// cout << nl;
		}

		bool ok = true;
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - 1; j++) {
				if (matrix[i][j] == 1 && (matrix[i + 1][j] == 0 && matrix[i][j + 1] == 0)) {
					ok = false;
					break;
				}
			}
			if (!ok) break;
		}
		puts(ok ? "Yes" : "No");
	}
	return 0;
}