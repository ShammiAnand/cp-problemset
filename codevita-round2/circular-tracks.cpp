#include <bits/stdc++.h>
using namespace std;

#define pi 		3.141592653589793

int main() {
	int r1, r2, s1, s2, t, d;
	cin >> r1 >> r2 >> s1 >> s2 >> t >> d;

	if (r1 + r2 < d) {
		cout << "no crash\n";
	} else if ( r1 + r2 == d) {
		// only touching once => E&F coincide
		// both motorcycles start at same position

		if (s1 * s2 < 0) {
			// they intersect at beginning
			cout << "0 E&F\n";
		} else {
			// both have same parity

		}


	} else {
		//intersecting at two positions
	}

	return 0;
}