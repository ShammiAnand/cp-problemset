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

bool isSorted(vector<int>&a) {
	vector<int> copy(a);
	sort(copy.begin(), copy.end());
	for (int i = 0; i < a.size(); i++) {
		if (copy[i] != a[i]) return false;
	}
	return true;
}

int main() {
	shammi();
	w(t) {
		int n, sum = 0; cin >> n;
		vector<int> a(n), b(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n; i++) {
			cin >> b[i];
			sum += b[i];
		}
		puts((sum == 0 || sum == n) ? (isSorted(a) ? "Yes" : "No") : "Yes");
	}
	return 0;
}