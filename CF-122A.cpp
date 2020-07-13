#include<bits/stdc++.h>
using namespace std;

bool isLucky(int n) {
	int digit;
	while (n > 0) {
		digit = n % 10;
		n /= 10;
		if (digit == 7 || digit == 4) continue;
		else return false;
	}
	return true;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	if (isLucky(n)) {
		cout << "YES\n";
	} else {
		if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0 || n % 477 == 0) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}