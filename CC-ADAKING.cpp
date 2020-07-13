//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define Max(a,b,c)      max(a,max(b,c))
#define pb              push_back
#define mp              make_pair
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
		int k; cin >> k;
		int obstacles = 64 - k;
		bool done = false;
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				if (obstacles > 0) {
					cout << 'X';
					obstacles--;
				} else {
					if (!done) {
						cout << 'O';
						done = true;
					} else cout << '.';
				}
			}
			cout << nl;
		}
	}
	return 0;
}