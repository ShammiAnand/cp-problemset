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
	int n, m, x, y; cin >> n >> m >> x >> y;
	int matrix[n + 1][m + 1];
	memset(matrix, 0 , sizeof(matrix));
	matrix[x][y] = 1;
	cout << x << " " << y << nl;
	for (int i = x; i >= 1; i--) {
		if (matrix[i][y] == 0) {
			matrix[i][y] = 1;
			cout << i << " " << y << nl;
		}
	}
	for (int i = y - 1; i >= 1; i--) {
		if (matrix[1][i] == 0) {
			matrix[1][i] = 1;
			cout << 1 << " " << i << nl;
		}
	}
	bool right = true;
	for (int i = 1; i <= n; i++) {
		if (right) {
			for (int j = 1; j <= m; j++) {
				if (matrix[i][j] == 0) {
					cout << i << " " << j << nl;
					matrix[i][j] = 1;
				}
			}
			right = false;
		} else {
			for (int j = m; j >= 1; j--) {
				if (matrix[i][j] == 0) {
					cout << i << " " << j << nl;
					matrix[i][j] = 1;
				}
			}
			right = true;
		}
	}
	return 0;
}