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

pair<int, int> maxSubArraySum(vector<int>& gain) {
	int size = gain.size();
	int max_so_far = INT_MIN, max_ending_here = 0,
	    start = 0, end = 0, s = 0;

	for (int i = 0; i < size; i++ ) {
		max_ending_here += gain[i];
		if (max_so_far < max_ending_here) {
			max_so_far = max_ending_here;
			start = s;
			end = i;
		}
		if (max_ending_here < 0) {
			max_ending_here = 0;
			s = i + 1;
		}
	}
	return {start, end};
}

int main() {
	shammi();
	int n, ans = 0; cin >> n;
	vector<int> bits(n), gain(n);
	for (int i = 0; i < n; i++) {
		cin >> bits[i];
		if (bits[i]) gain[i] = -1;
		else gain[i] = 1;
	}
	pair<int, int> interval = maxSubArraySum(gain);

	// cout << "Start : " << interval.f << "\nEnd : " << interval.s << nl;

	for (int i = 0; i < interval.f; i++) {
		if (bits[i]) ans++;
	}
	for (int i = interval.s + 1; i < n; i++) {
		if (bits[i]) ans++;
	}
	for (int i = interval.f; i <= interval.s; i++) {
		if (!bits[i]) ans++;
	}
	cout << max(ans, 0) << nl;
	return 0;
}