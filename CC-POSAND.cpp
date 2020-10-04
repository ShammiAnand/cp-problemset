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

bool isPowerOfTwo (int x) {
	return x && (!(x & (x - 1)));
}

template<typename T_vector>
void output(const T_vector &v, int start = -1, int end = -1) {
	if (start < 0) start = 0;
	if (end < 0) end = int(v.size());

	for (int i = start; i <= end; i++) {
		cout << v[i] << (i == end ? '\n' : ' ');
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
		int n; cin >> n;
		if (isPowerOfTwo(n) && n != 1) {
			cout << -1 << nl;
		} else {
			if (n == 1) {
				cout << 1 << nl;
				continue;
			}
			vi powers;
			int count = 0;
			for (int i = 1; i <= 17; i++) {
				if (n / pow(2, i) >= 1) {
					count = i;
				}
			}
			// cout << count << nl;
			vector<bool> printed(n + 1, false);
			bool last_printed_powerof2 = false;
			int counter = n, value = n;
			vi p(n + 1);
			while (counter >= 0) {
				if (last_printed_powerof2) {
					if (printed[value]) {
						p[counter] = value - 1;
						printed[value - 1] = true;
						value -= 2;
						last_printed_powerof2 = false;
					} else {
						p[counter] = value;
						printed[value] = true;
						value--;
						last_printed_powerof2 = false;
					}
				} else {
					if (count != 0) {
						p[counter] = pow(2, count);
						printed[pow(2, count)] = true;
						count--;
						last_printed_powerof2 = true;
					} else {
						if (printed[value]) {
							p[counter] = value - 1;
							printed[value - 1] = true;
							value -= 2;
							last_printed_powerof2 = false;
						} else {
							p[counter] = value;
							printed[value] = true;
							value--;
							last_printed_powerof2 = false;
						}
					}
				}
				counter--;
			}
			output(p, 1, n);
		}
	}
	return 0;
}