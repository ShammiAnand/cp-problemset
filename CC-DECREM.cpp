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

void primeSieve(int *arr) {
	for (int i = 3; i <= 1100000; i += 2) arr[i] = 1;
	for (ll i = 3; i <= 1100000; i += 2) {
		if (arr[i] == 1) {
			for (ll j = i * i; j <= 1100000; j = j + i) arr[j] = 0;
		}
	}
	//special cases
	arr[2] = 1;
	arr[0] = arr[1] = 0;
}


int main() {
	// int prime[1100005] = {0};
	// primeSieve(prime);
	shammi();
	w(t) {
		int l, r; cin >> l >> r;
		if (l == 1) {
			cout << -1 << nl;
		} else {
			if (r < 2 * l) cout << r << nl;
			else cout << -1 << nl;
		}
	}
	return 0;
}