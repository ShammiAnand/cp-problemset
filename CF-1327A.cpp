#include <bits/stdc++.h>
using namespace std;
int main() {
	long long t;
	cin >> t;
	while(t--){
		long long n, k;
		cin >> n >> k;
		cout << (n % 2 == k % 2 && n >= k * k ? "YES\n" : "NO\n");
	}
	return 0;
}