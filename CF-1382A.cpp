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
		int n, m; cin >> n >> m;
		int A[n], B[m], freqA[1001] = {0}, freqB[1001] = {0};
		for (int i = 0; i < n; i++) {
			cin >> A[i];
			freqA[A[i]]++;
		}
		for (int i = 0; i < m; i++) {
			cin >> B[i];
			freqB[B[i]]++;
		}
		int ans = 0;
		if (n > m) {
			for (int i = 0; i < n; i++) {
				if (freqB[A[i]] > 0) {
					ans = A[i];
					break;
				}
			}
		} else {
			for (int i = 0; i < m; i++) {
				if (freqA[B[i]] > 0) {
					ans = B[i];
					break;
				}
			}
		}
		if (ans != 0) printf("YES\n%d %d\n", 1, ans);
		else printf("NO\n");
	}
	return 0;
}