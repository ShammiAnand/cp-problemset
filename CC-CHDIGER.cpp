#include<bits/stdc++.h>
using namespace std;

#define ll             long long
#define pb              push_back
#define mp              make_pair
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(x)            int x; cin>>x; while(x--)
#define rep(x,a,n,b)    for(x=a;x<=n;x+=b)
#define rept(x,a,n,b)   for(x=a;x>=n;x-=b)

void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
ll maxDigit(ll n) {
	ll mx = 0;
	while (n > 0) {
		mx = max(mx, n % 10);
		n /= 10;
	}
	return mx;
}
int main() {
	shammi();
	w(t) {
		string n;
		char c;
		cin >> n >> c;
		int l = n.length();
		if (n[l - 1] > c) n[l - 1] = c;

		int i;
		string ans = "";
		rep(i, 1, l - 1, 1)
		{
			int j = i - 1;
			while (j >= 0 && n[j] == '0') j--;
			if (j >= 0 && n[i] < n[j])
			{
				n[j] = '0';
				n += c;
				i--;
			}
		}
		l = n.length();
		rep(i, 0, l - 1, 1)
		if (n[i] != '0')
			ans += n[i];
		cout << ans << endl;
	}
	return 0;
}