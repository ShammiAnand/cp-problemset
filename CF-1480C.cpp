/*
@author: Shammi Anand
@contact: shammianand101@gmail.com
@website: shammianand.live
@problem:
*/

#include <bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define f               first
#define s               second
#define vi              vector<int>
#define pii             pair<int, int>
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

// most significant set bit : leftmost
ll clz(ll N) {
	return N ? 32 - __builtin_clzll(N) : -INF;
}

void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

const int MAXN = 100010;

int n;
int a[MAXN];

void query(int x) {
	if (1 <= x && x <= n) {
		printf("? %d\n", x);
		fflush(stdout);
		scanf("%d", &a[x]);
	}
}


int main() {
	shammi();
	scanf("%d", &n);
	a[0] = a[n + 1] = n + 1;
	int L = 1, R = n;
	while (L < R) {
		int m = (L + R) / 2;
		query(m);
		query(m + 1);
		if (a[m] < a[m + 1]) R = m;
		else L = m + 1;
	}
	printf("! %d\n", L);
	fflush(stdout);
	return 0;
}