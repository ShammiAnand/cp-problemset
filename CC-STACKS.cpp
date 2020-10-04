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
	if (end < 0) end = int(v.size());
	cout << v.size() << " ";
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

void findAndReplace(vi& v, int& elem) {
	// O(logN)
	int sz = v.size();
	if (elem >= v[sz - 1]) {
		v.pb(elem);
		return;
	} else {
		int left = 0, right = sz - 1;
		while (left <= right) { // 1 1 5 -- 2
			int mid = left + (right - left) / 2;
			if (elem >= v[mid]) {
				//go right
				if (mid == sz - 1) {
					if (v[mid] == elem) v.pb(elem);
					else v[mid] = elem;
					return;
				}
				if (mid + 1 == sz - 1) {
					if (v[mid + 1] > elem) v[mid + 1] = elem;
					else v.pb(elem);
					return;
				}
				left = mid;
			} else {
				//go left
				if (mid == 0) {
					v[mid] = elem;
					return;
				}
				if (v[mid - 1] > elem) {
					right = mid;
				} else {
					v[mid] = elem;
					return;
				}
			}
		}
	}
}

int main() {
	shammi();
	w(t) {
		int n; cin >> n;
		vi a(n);
		for (int& radius : a) cin >> radius;
		// output(a);
		vi stacks;
		stacks.clear();
		stacks.pb(a[0]);
		for (int i = 1; i < n; i++) {
			findAndReplace(stacks, a[i]);
			// output(stacks);
		}
		output(stacks);
	}
	return 0;
}