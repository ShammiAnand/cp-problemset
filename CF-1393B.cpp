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
	int n; cin >> n;
	int A[n];
	int two = 0, four = 0;
	int count[100005] = {0};
	for (int i = 0; i < n; i++) {
		cin >> A[i];
		//remove the current value's count from two and four
		two -= count[A[i]] / 2;
		four -= count[A[i]] / 4;

		count[A[i]]++; //update count of current value

		// recalculate the count!
		two += count[A[i]] / 2;
		four += count[A[i]] / 4;

	}
	int q; cin >> q;
	for (int i = 0; i < q; i++) {
		char c; int p; cin >> c >> p;
		if (c == '+') {
			two -= count[p] / 2;
			four -= count[p] / 4;
			count[p]++;
			two += count[p] / 2;
			four += count[p] / 4;
		} else {
			if (count[p] > 0) {
				two -= count[p] / 2;
				four -= count[p] / 4;
				count[p]--;
				two += count[p] / 2;
				four += count[p] / 4;
			}
		}
		if (two >= 4 && four >= 1 ) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}