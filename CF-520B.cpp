//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define Max(a,b,c)      max(a,max(b,c))
#define Min(a,b,c)      min(a,min(b,c))
#define pb              emplace_back
#define mp              make_pair
#define f               first
#define s               second
#define mod             1000000007
#define nl              "\n"
#define w(x)            int x; cin>>x; while(x--)

inline bool isPowerOfTwo(int x) {
	//O(v) -> v is the number of bits in the binary form of x
	return x && (!(x & (x - 1)));
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
	int n, m; cin >> n >> m;
	if (n >= m) {
		cout << n - m << nl;
	} else {
		int count = 0;
		while (n != m) {
			if (n < m) {
				if (m & 1) {
					m += 1;
					count++;
					continue;
				} else {
					m /= 2;
					count++;
					continue;
				}
			} else {
				m += 1;
				count++;
				continue;
			}
		}
		cout << count << nl;
	}
	return 0;
}