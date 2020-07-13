//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define Max(a,b,c)      max(a,max(b,c))
#define pb              push_back
#define mp              make_pair
#define mod             1000000007
#define nl              "\n"
#define w(x)            int x; cin>>x; while(x--)

void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
int main() {
	shammi();
	w(t) {
		int n; cin >> n;
		int arr[n], prev = 0;
		ll sum = 0;
		bool skip = true;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			if (skip) {
				prev = arr[i];
				skip = false;
			} else {
				sum += abs(arr[i] - prev) - 1;
				prev = arr[i];
			}
		}
		cout << sum << nl;
	}
	return 0;
}