/*
This code is written by Shammi Anand
contact : shammianand101@gmail.com, shammianand.me
*/
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define f               first
#define s               second
#define vi              vector<int>
#define pii             pair<int, int>
#define rep(i,a,n)      for(int i=a;i<n;i++)
#define F(i,n)          for(int i=0;i<n;i++)
#define all(a)          a.begin(), a.end()
#define INF             1e9+7
#define nl              "\n"
#define w(x)            int x; cin>>x; while(x--)

template<typename T_vector>
void output(const T_vector &v, int start = -1, int end = -1) {
	if (start < 0) start = 0;
	if (end < 0) end = (int)v.size();

	for (int i = start; i < end; i++) {
		cout << v[i] << (i < end - 1 ? ' ' : '\n');
	}
}

void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int search(vi arr, int idx, int total) {
	int n = (int)arr.size();
	int l = idx, r = n - 1;
	while (l < r) {
		int mid = (l + r) >> 1;
		mid++;
		if (arr[mid] - arr[idx - 1] <= total) l = mid;
		else r = mid - 1;
	}
	return l - idx + 1;
}



int main() {
	shammi();
	int n, total, prev = 0, count = 0; cin >> n >> total;
	vi time(n + 1), prefix(n + 1, 0);
	rep(i, 1, n + 1) {
		cin >> time[i];
		if (i == 1) prefix[i] += time[i];
		else prefix[i] += prefix[i - 1] + time[i];
	}
	// output(prefix);
	int left = 0, right = n - 1, mx = 0;
	rep(i, 1, n + 1) {
		if (time[i] > total) continue;
		mx = max(mx, search(prefix, i, total));
	}
	cout << mx << nl;
	return 0;
}