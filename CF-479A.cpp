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

int solve(int a, int b) {
	return max(a * b, a + b);
}


int solve(int a, int b, int c) {
	return max(max(solve(a + b, c), solve(a, b + c)), max(solve(a * b, c), solve(a, b * c)));
}

int main() {
	shammi();
	int a, b, c; cin >> a >> b >> c;
	cout << solve(a, b, c) << nl;
	return 0;
}