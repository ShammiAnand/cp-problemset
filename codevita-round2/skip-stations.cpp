/*
@author: Shammi Anand
@contact: shammianand101@gmail.com
@website: shammianand.live
@problem:
*/


#include <bits/stdc++.h>
using namespace std;

#define ll 		unsigned long long

ll countWays(int n) {
	ll res[n + 1];
	res[0] = 1;
	res[1] = 2;
	res[2] = 4;
	for (int i = 3; i <= n; i++)
		res[i] = res[i - 1] + res[i - 2]
		         + res[i - 3];

	return res[n];
}


int main() {
	int t; cin >> t;
	while (t--) {
		int n, ans = 0; cin >> n;
		//for (int z = 0; z <= 100; z++) {
		//for (int y = 0; y <= 100; y++) {
		//		if (n - ((3 * z) + (2 * y)) >= 0) ans++;
		//}
		//}
		//cout << calculate(n) << endl;
		cout << countWays(n) << "\n";
	}
	return 0;
}