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
		string temp, S; cin >> temp;
		S = "=";
		S += temp; //to make the string 1 based indexing
		int x, n = temp.length(); cin >> x;
		string W(n + 1, '1');
		W[0] = '='; //to make the string 1 based indexing
		bool possible = true;
		for (int i = 1; i <= n; i++) {
			if (S[i] == '0') {
				if (i + x <= n) W[i + x] = '0';
				if (i - x > 0) W[i - x] = '0';
			}
		}
		for (int i = 1; i <= n; i++) {
			if (S[i] == '1') {
				int found = 0;
				if (i + x <= n) if (W[i + x] == '1') found++;
				if (i - x > 0) if (W[i - x] == '1') found++;

				if (found == 0) {
					possible = false;
					break;
				}
			}
		}
		if (!possible) cout << -1 << nl;
		else cout << W.substr(1, n + 1) << nl;
	}
	return 0;
}