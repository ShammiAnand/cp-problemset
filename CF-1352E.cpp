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
int findSubarraySum(ll arr[], ll n, ll sum)
{
	// STL map to store number of subarrays
	// starting from index zero having
	// particular value of sum.
	unordered_map<int, int> prevSum;

	int res = 0;

	// Sum of elements so far.
	int currsum = 0;

	for (int i = 0; i < n; i++) {

		// Add current element to sum so far.
		currsum += arr[i];

		// If currsum is equal to desired sum,
		// then a new subarray is found. So
		// increase count of subarrays.
		if (currsum == sum)
			res++;

		// currsum exceeds given sum by currsum
		//  - sum. Find number of subarrays having
		// this sum and exclude those subarrays
		// from currsum by increasing count by
		// same amount.
		if (prevSum.find(currsum - sum) !=
		        prevSum.end())
			res += (prevSum[currsum - sum]);


		// Add currsum value to count of
		// different values of sum.
		prevSum[currsum]++;
	}

	return res;
}
int main() {
	shammi();
	w(t) {
		ll n; cin >> n;
		ll arr[n];
		for (ll i = 0; i < n; i++) {
			cin >> arr[i];
		}
		ll count = 0;
		for (ll i = 0; i < n; i++) {
			if (arr[i] >= 2) {
				if (findSubarraySum(arr, n, 2) > 0) {
					count++;
				}
			}
		}
		cout << count << nl;
	}
	return 0;
}