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
	w(t) {
		string s; cin >> s;
		int n = s.length();
		vector<int> len;
		int count = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] == '0') {
				if (count == 0) continue;
				else {
					len.pb(count);
					count = 0;
				}
			} else {
				count++;
			}
		}
		len.pb(count);
		sort(len.begin(), len.end(), greater<int>());
		int sum = 0;
		for (int i = 0; i < len.size(); i += 2) {
			sum += len[i];
		}
		cout << sum << nl;
	}
	return 0;
}