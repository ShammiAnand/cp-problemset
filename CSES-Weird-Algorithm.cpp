//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll             	long long
#define Max(a,b,c)		max(a,max(b,c))
#define pb              push_back
#define mp              make_pair
#define mod             1000000007
#define nl				"\n"
#define w(x)            int x; cin>>x; while(x--)

void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
}
int main() {
	shammi();
	ll n; cin >> n;
	cout << n << " ";
	while (n > 1) {
		if (n % 2 == 0) {
			n /= 2;
			cout << n << " ";
		} else {
			n *= 3;
			++n;
			cout << n << " ";
		}
	}
	// cout << n << nl;
	return 0;
}