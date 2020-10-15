//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define Max(a,b,c)      max(a,max(b,c))
#define Min(a,b,c)      min(a,min(b,c))
#define pb              push_back
#define mp              make_pair
#define rep(i,a,n)      for (int i=a;i<n;i++)
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


const int N = 110;
int p, q, l, r, ans, tl, tr;
int pool[10000], pa[10000], pb[10000], *vis = pool + 5000, *a = pa + 5000, *b = pb + 5000;

int main() {
	shammi();
	scanf("%d%d%d%d", &p, &q, &l, &r);
	rep(i, 0, p) {
		scanf("%d%d", &tl, &tr);
		rep(j, tl, tr) a[j] = 1;
	}
	rep(i, 0, q) {
		scanf("%d%d", &tl, &tr);
		rep(j, tl, tr) b[j] = 1;
	}
	rep(i, 0, 1001) rep(j, 0, 1001) if (a[i] && b[j]) vis[i - j] = vis[i - j - 1] = 1;
	rep(k, l, r + 1) ans += vis[k] | vis[k - 1];
	printf("%d\n", ans);
}