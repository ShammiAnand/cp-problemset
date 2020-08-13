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
		int r, g, b, w; cin >> r >> g >> b >> w;
		int even = 0, odd = 0, zero = 0;
		for (auto elem : {r, g, b}) {
			if (elem % 2 == 0 && elem > 0) even++;
			else if (elem % 2 == 1 && elem > 0) odd++;
			else if (elem == 0) zero++;
		}

		if ((r % 2 == 1 && b % 2 == 1 && g % 2 == 1 && w % 2 == 1) || (r % 2 == 0 && b % 2 == 0 && g % 2 == 0 && w % 2 == 0)) {
			cout << "Yes\n";
			continue;
		} else {
			if (zero == 3) {
				cout << "Yes\n";
				continue;
			}
			if (zero == 2) {
				if (odd == 1 && w % 2 == 1) {
					cout << "No\n";
					continue;
				} else {
					cout << "Yes\n";
					continue;
				}
			}
			if (zero == 1) {
				if (even == 2) {
					cout << "Yes\n";
					continue;
				} else {
					if (even == 1) {
						if (w % 2 == 0) {
							cout << "Yes\n";
							continue;
						} else {
							cout << "No\n";
							continue;
						}
					} else {
						cout << "No\n";
						continue;
					}
				}
			}
			if (zero == 0) {
				if (w > 0) {
					if (w % 2 == 0) {
						if (odd == 3) {
							cout << "Yes\n";
							continue;
						}
						if (odd == 2) {
							cout << "No\n";
							continue;
						}
						if (odd == 1) {
							cout << "Yes\n";
							continue;
						}
						if (odd == 0) {
							cout << "Yes\n";
							continue;
						}
					} else {
						if (odd == 3) {
							cout << "Yes\n";
							continue;
						}
						if (odd == 2) {
							cout << "Yes\n";
							continue;
						}
						if (odd == 1) {
							cout << "No\n";
							continue;
						}
						if (odd == 0) {
							cout << "Yes\n";
							continue;
						}
					}
				} else {
					if (odd == 3) {
						cout << "Yes\n";
						continue;
					}
					if (odd == 2) {
						cout << "No\n";
						continue;
					}
					if (odd == 1) {
						cout << "Yes\n";
						continue;
					}
					if (odd == 0) {
						cout << "Yes\n";
						continue;
					}
				}
			}
		}
	}
	return 0;
}