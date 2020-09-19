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
void output_vector(const T_vector &v, int start = -1, int end = -1) {
	if (start < 0) start = 0;
	if (end < 0) end = int(v.size());

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

int main() {
	shammi();
	w(t) {
		int n, sum = 0; cin >> n;
		vi a(n), l(n), unlocked;
		for (int& elem : a) {
			cin >> elem;
		}
		for (int& lock : l) {
			cin >> lock;
		}
		F(i, n) {
			if (l[i] == 0) {
				unlocked.pb(a[i]);
			}
		}
		if (unlocked.size() != 0 ) sort(all(unlocked), greater<int>());
		int counter = 0, idx = -1;
		vi p(a);
		F(i, n) {
			if (l[i] == 0) {
				p[i] = unlocked[counter++];
			} else p[i] = a[i];
			sum += p[i];
			if (sum < 0) idx = i;
			// cout << sum << (i + 1 == n ? "\n" : " ");
		}
		// //answer
		output_vector(p);
	}
	return 0;
}