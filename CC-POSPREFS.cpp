/*
@author: Shammi Anand
@contact: shammianand101@gmail.com
@website: shammianand.live
@problem: https://www.codechef.com/DEC20B/problems/POSPREFS
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
		int n, k; cin >> n >> k;
		vi a(n);
		F(i, n) {
			if (i % 2 == 0) a[i] = i + 1;
			else a[i] = -i - 1;
		}

		int pos = (n / 2) + (n % 2);
		int neg = n / 2;

		if (pos > k) {
			for (int i = n - 1; i >= 0; i--) {
				if (pos == k) break;
				if (a[i] > 0) {
					a[i] = -a[i];
					pos--;
				}
			}
		} else {
			for (int i = n - 1; i >= 0; i--) {
				if (pos == k) break;
				if (a[i] < 0) {
					a[i] = -a[i];
					pos++;
				}
			}
		}
		output(a);
	}
	return 0;
}