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

int ceil(int a, int b) {
	if (a % b == 0) return a / b;
	else return (a / b) + 1;
}

int main() {
	shammi();
	int n, ans = 0; cin >> n;
	vi groups(n), freq(5, 0);
	for (int& group : groups) {
		cin >> group;
		freq[group]++;
	}
	ans += freq[4];
	ans += freq[3];
	freq[1] -= freq[3];
	if (freq[1] <= 0) freq[1] = 0;
	ans += (freq[2] / 2);
	freq[2] -= 2 * (freq[2] / 2);
	if (freq[2]) {
		ans += 1;
		freq[2] = 0;
		if (freq[1] > 0) freq[1] -= 2;
	}
	if (freq[1] > 0) {
		ans += ceil(freq[1], 4);
	}

	cout << ans << endl;
	return 0;
}