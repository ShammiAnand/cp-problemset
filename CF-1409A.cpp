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

int ceil(int a, int b) {
	if (a % b == 0) return a / b;
	else return (a / b) + 1;
}

int main() {
	shammi();
	w(t) {
		int a, b; cin >> a >> b;
		if (a == b) {
			cout << 0 << nl;
			continue;
		}
		cout << ceil(abs(a - b), 10) << nl;
	}
	return 0;
}