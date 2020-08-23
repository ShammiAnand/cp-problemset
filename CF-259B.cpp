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

inline bool isPowerOfTwo(int x) {
	//O(v) -> v is the number of bits in the binary form of x
	return x && (!(x & (x - 1)));
}

void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
int matrix[4][4];

int main() {
	shammi();
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= 3; j++) {
			cin >> matrix[i][j];
		}
	}
	int mx = 100000;
	for (int i = 1; i <= mx; i++) {
		bool possible = true;
		matrix[1][1] = i;
		matrix[2][2] = (matrix[1][1] + matrix[1][2] + matrix[1][3]) - (matrix[2][1] + matrix[2][3]);
		matrix[3][3] = (matrix[1][1] + matrix[1][2] + matrix[1][3]) - (matrix[3][1] + matrix[3][2]);

		int sum = (matrix[1][1] + matrix[1][2] + matrix[1][3]);

		if (sum != (matrix[2][1] + matrix[2][2] + matrix[2][3])) possible = false;
		if (sum != (matrix[3][1] + matrix[3][2] + matrix[3][3])) possible = false;
		if (sum != (matrix[1][1] + matrix[2][1] + matrix[3][1])) possible = false;
		if (sum != (matrix[1][2] + matrix[2][2] + matrix[3][2])) possible = false;
		if (sum != (matrix[1][3] + matrix[2][3] + matrix[3][3])) possible = false;
		if (sum != (matrix[1][1] + matrix[2][2] + matrix[3][3])) possible = false;

		if (possible) {
			for (int j = 1; j <= 3; j++) {
				for (int k = 1; k <= 3; k++) {
					cout << matrix[j][k] << " ";
				}
				cout << nl;
			}
			break;
		} else {
			continue;
		}

	}
	return 0;
}