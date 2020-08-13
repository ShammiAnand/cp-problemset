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
		int n; cin >> n;
		string s; cin >> s;
		int total = 1;
		// vector<int> seq;
		int where[n] = {0};
		where[0] = total;
		int want;
		bool done[n] = {0};
		if (s[0] == '0') want = 1;
		else want = 0;
		done[0] = 1;
		int tried = 0;
		while (total < n) {

			bool atleast = false;
			for (int i = 1; i < n; i++) {
				if (s[i] == '1') {
					if (want == 1 && !done[i]) {
						atleast = true;
						if (tried == 0) where[i] = total;
						else where[i] = total + 1;
						done[i] = 1;
						want = 0;
						continue;
					} else continue;
				} else if (s[i] == '0' && !done[i]) {
					if (want == 0) {
						atleast = true;
						if (tried == 0) where[i] = total;
						else where[i] = total + 1;
						done[i] = 1;
						want = 1;
						continue;
					} else continue;
				}
			}

			if (atleast == true) {
				total++;
				tried = 0;
				continue;
			}
			else {

				if (want == 0) want = 1;
				else want = 0;
				tried++;
				if (tried >  1) total++;
			}
		}
		int mx = 0;
		for (int i = 0; i < n; i++) mx = max(mx, where[i]);
		cout << mx << nl;
		for (int i = 0; i < n; i++) {
			cout << where[i] << " ";
		}
		cout << nl;
	}
	return 0;
}