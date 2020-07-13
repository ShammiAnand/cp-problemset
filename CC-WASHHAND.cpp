#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

// #define int32_t			int
#define f(i,n)			for(int i=0;i<n;i++)
#define ff              first
#define ss              second
#define ll             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int countOne(string s) {
	int count = 0;
	int n = s.length();
	f(i, n) if (s[i] == '1') count++;
	return count;
}

int main() {
	shammi();
	w(t) {
		int n, d; cin >> n;
		string s; cin >> s;
		cin >> d;
		int P[d];
		f(i, d) cin >> P[i];
		int ill = countOne(s);
		int l = 0, r = 0;
		f(i, d) {
			l = 0, r = 0;
			f(j, n) {
				if (j == 0) {
					if (s[j + 1] == '1' && s[j] == '0' && (j + 1) != P[i] - 1) {
						s[j] = '1';
						ill++;
						l++;
						continue;
					}
				}
				if (j == P[i] - 1) {
					if ((j + 1) < n && s[j + 1] == '0' && s[j] == '1') {
						s[j + 1] = '1';
						ill++;
					}
					continue;
				}
				if (j == P[i] - 2) {
					if (s[j - 1] == '0' && s[j] == '1') {
						s[j - 1] = '1';
						ill++;
						continue;
					}
				}
				if (s[j] == '1') {
					if (s[j + 1] == '0') {
						s[j + 1] = '1';
						ill++;
					}
					if (s[j - 1] == '0') {
						s[j - 1] = '1';
						ill++;
					}
					break;
				} else continue;
			}
		}
		printf("%lld\n", ill);
	}
	return 0;
}