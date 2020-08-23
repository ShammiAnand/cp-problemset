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
	int r, g, b; cin >> r >> g >> b;
	int R[r], B[b], G[g];
	for (int i = 0; i < r; i++) cin >> R[i];
	for (int i = 0; i < g; i++) cin >> G[i];
	for (int i = 0; i < b; i++) cin >> B[i];

	sort(R, R + r, greater<int>());
	sort(G, G + g, greater<int>());
	sort(B, B + b, greater<int>());
	int rc = 0, bc = 0, gc = 0;
	int sum = 0;
	while ((rc < r && bc < b) || (rc < r && gc < g) || (gc < g && bc < b)) {
		if (rc < r && gc < g && bc < b) {
			if (R[rc] >= G[gc]) {
				if (R[rc] == G[gc]) {
					int rcc = rc, gcc = gc;
					while (R[rcc] == G[gcc] &&  rcc < r && gcc < r) {
						rcc++, gcc++;
					}
					if (rcc >= r || gcc >= r) {
						if (B[bc] >= G[gc]) {
							if (B[bc] == G[gc]) {
								int bcc = bc, gcc = gc;
								while (B[bcc] == G[gcc] &&  bcc < b && gcc < r) {
									bcc++, gcc++;
								}
								if (bcc >= b || gcc >= g) {
									sum += B[bc] * R[rc];
									// cout << B[bc] << " " << R[rc] << nl;
									bc++, rc++;
									continue;
								} else {
									if (B[bcc] > G[gcc]) {
										sum += B[bc] * R[rc];
										// cout << B[bc] << " " << R[rc] << nl;
										bc++, rc++;
										continue;
									} else {
										sum += G[gc] * R[rc];
										// cout << B[bc] << " " << R[rc] << nl;
										rc++, gc++;
										continue;
									}
								}
							}
							sum += B[bc] * R[rc];
							// cout << B[bc] << " " << R[rc] << nl;
							bc++, rc++;
							continue;
						} else {
							sum += R[rc] * G[gc];
							// cout << G[gc] << " " << R[rc] << nl;
							rc++, gc++;
							continue;
						}
					} else {
						if (R[rcc] > G[gcc]) {
							//use R
							if (B[bc] >= G[gc]) {
								if (B[bc] == G[gc]) {
									int bcc = bc, gcc = gc;
									while (B[bcc] == G[gcc] &&  bcc < b && gcc < r) {
										bcc++, gcc++;
									}
									if (bcc >= b || gcc >= g) {
										sum += B[bc] * R[rc];
										// cout << B[bc] << " " << R[rc] << nl;
										bc++, rc++;
										continue;
									} else {
										if (B[bcc] > G[gcc]) {
											sum += B[bc] * R[rc];
											// cout << B[bc] << " " << R[rc] << nl;
											bc++, rc++;
											continue;
										} else {
											sum += G[gc] * R[rc];
											// cout << B[bc] << " " << R[rc] << nl;
											rc++, gc++;
											continue;
										}
									}
								}
								sum += B[bc] * R[rc];
								// cout << B[bc] << " " << R[rc] << nl;
								bc++, rc++;
								continue;
							} else {
								sum += R[rc] * G[gc];
								// cout << G[gc] << " " << R[rc] << nl;
								rc++, gc++;
								continue;
							}
						} else {
							//use G
							if (B[bc] >= G[gc]) {
								if (B[bc] == G[gc]) {
									int bcc = bc, gcc = gc;
									while (B[bcc] == G[gcc] &&  bcc < b && gcc < r) {
										bcc++, gcc++;
									}
									if (bcc >= b || gcc >= g) {
										sum += B[bc] * R[rc];
										// cout << B[bc] << " " << R[rc] << nl;
										bc++, rc++;
										continue;
									} else {
										if (B[bcc] > G[gcc]) {
											sum += B[bc] * G[gc];
											// cout << B[bc] << " " << R[rc] << nl;
											bc++, gc++;
											continue;
										} else {
											sum += G[gc] * R[rc];
											// cout << B[bc] << " " << R[rc] << nl;
											rc++, gc++;
											continue;
										}
									}
								}
								sum += B[bc] * R[rc];
								// cout << B[bc] << " " << R[rc] << nl;
								bc++, rc++;
								continue;
							} else {
								sum += R[rc] * G[gc];
								// cout << G[gc] << " " << R[rc] << nl;
								rc++, gc++;
								continue;
							}
						}
					}
				}
				if (B[bc] >= G[gc]) {
					if (B[bc] == G[gc]) {
						if (g > r) {
							sum += G[gc] * R[rc];
							gc++, rc++;
							continue;
						}
					}
					sum += B[bc] * R[rc];
					// cout << B[bc] << " " << R[rc] << nl;
					bc++, rc++;
					continue;
				} else {
					sum += R[rc] * G[gc];
					// cout << G[gc] << " " << R[rc] << nl;
					rc++, gc++;
					continue;
				}
			} else {
				if (B[bc] >= R[rc]) {
					if (B[bc] == R[rc]) {
						if (b < r) {
							sum += G[gc] * R[rc];
							gc++, rc++;
							continue;
						}
					}
					sum += G[gc] * B[bc];
					// cout << B[bc] << " " << G[gc] << nl;
					bc++, gc++;
					continue;
				} else {
					sum += G[gc] * R[rc];
					// cout << G[gc] << " " << R[rc] << nl;
					gc++, rc++;
					continue;
				}
			}
		} else {
			if (rc >= r) {
				sum += B[bc] * G[gc];
				// cout << B[bc] << " " << G[gc] << nl;
				bc++, gc++;
				continue;
			} else if (bc >= b) {
				sum += R[rc] * G[gc];
				// cout << G[gc] << " " << R[rc] << nl;
				rc++, gc++;
				continue;
			} else if (gc >= g) {
				sum += R[rc] * B[bc];
				// cout << B[bc] << " " << R[rc] << nl;
				rc++, bc++;
				continue;
			}
		}
	}
	cout << sum << nl;
	return 0;
}