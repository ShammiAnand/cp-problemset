//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define Max(a,b,c)      max(a,max(b,c))
#define Min(a,b,c)      min(a,min(b,c))
#define pb              push_back
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
		int n; cin >> n;
		vector<int> A(n), temp;
		int mn = mod;
		for (int i = 0; i < n; i++) {
			cin >> A[i];
			mn = min(mn, A[i]);
			temp.pb(A[i]);
		}
		sort(temp.begin(), temp.end());
		bool possible = true;
		for (int i = 0; i < n; i++) {
			if (temp[i] != A[i] && A[i] % mn != 0) {
				possible = false;
			}
		}
		cout << (possible ? "YES\n" : "NO\n");
	}
	return 0;
}