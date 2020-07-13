#include<bits/stdc++.h>
using namespace std;

#define ll             	long long
#define pb              push_back
#define mp              make_pair
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define nl				"\n"
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(x)            ll x; cin>>x; while(x--)

void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
int a[100];
void work() {
	int n, sum = 0; scanf("%d", &n);
	for (int i = 0; i < n; i++)scanf("%d", a + i), sum += a[i] & 1;
	if (sum % 2 == 0) {puts("YES"); return;}
	sort(a, a + n);
	for (int i = 1; i < n; i++)if (a[i] == a[i - 1] + 1) {puts("YES"); return;}
	puts("NO");
}
int main() {
	// shammi()/;
	int t; cin >> t;
	while (t--) work();
	return 0;
}