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

int search(int stacks[], int n, int q) {
	int start = 0, end = n - 1;
	while (start < end) {
		int mid = (start + end) / 2;
		if (stacks[mid] == q) {
			return mid + 1;
			// cout << mid + 1 << nl;
			// break;
		}
		if (stacks[mid] < q) {
			if (mid == n - 2) {
				return n;
			}
			start = mid + 1;
			continue;
		}
		if (stacks[mid] > q) {
			if (mid == 0) {
				return 1;
			}
			if (stacks[mid - 1] < q) {
				return mid + 1;
				// cout << mid + 1 << nl;
				// break;
			} else {
				end = mid - 1;
				continue;
			}
		}
	}
	return n;
}

int main() {
	shammi();
	int n; cin >> n;
	int a[n], stacks[n], counter = 0;
	memset(stacks, 0, sizeof(stacks));
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (i == 0) stacks[0] = a[0];
		else stacks[i] += (stacks[i - 1] + a[i]);
	}
	int index[stacks[n - 1]];
	for (int i = 1; i <= stacks[n - 1]; i++) {
		if (i <= stacks[counter]) {
			index[i] = counter + 1;
		} else {
			++counter;
			index[i] = counter + 1;
		}
	}
	// for (int i = 0; i < n; i++) cout << stacks[i] << ((i + 1 == n) ? "\n" : " ");
	int m; cin >> m;
	for (int i = 0; i < m; i++) {
		int q; cin >> q;
		cout << index[q] << nl;
	}

	return 0;
}