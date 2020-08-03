//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define Max(a,b,c)      max(a,max(b,c))
#define Min(a,b,c)      min(a,min(b,c))
#define pb              push_back
#define mp              make_pair
#define f               first
#define s               second
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
	// shammi();
	w(t) {
		int n; cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) cin >> arr[i];

		int k = 0;
		while (k < n and arr[k] == 1) k++;

		if (k < n) {
			if (k % 2) cout << "Second\n";
			else cout << "First\n";
		} else {
			if (k % 2 == 0) cout << "Second\n";
			else cout << "First\n";
		}
	}
	return 0;
}