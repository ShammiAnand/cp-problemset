#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	char ch = s[s.length() - 1];
	int n = (int)ch;
	if (n % 2 == 0) cout << 0 << endl;
	else cout << 1 << endl;
	return 0;
}