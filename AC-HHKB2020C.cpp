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

int main() {
	shammi();
	int n; cin >> n;
	vi p(n);
	for (int& elem : p) cin >> elem;
	map<int, int>  visited;
	int curr_mn = INT_MAX;
	int mn = 0;
	for (int i = 0; i < n; i++) {
		visited[p[i]]++;
		curr_mn = min(curr_mn, p[i]);
		if (mn != p[i]) {
			cout << mn << nl;
		}
		else {
			int counter = 1;
			while (visited.find(mn + counter) != visited.end()) {
				visited[mn + counter]++;
				counter++;
			}
			cout << mn + counter << nl;
			mn = mn + counter;
			counter = 0;
		}

	}
	// cout << nl;
	return 0;
}