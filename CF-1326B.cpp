#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	int mx = 0;
	while (n--) {
		int b;
		cin >> b;
		cout << b+mx << " ";
		mx = max(mx, b+mx);
	}
	return 0;
}