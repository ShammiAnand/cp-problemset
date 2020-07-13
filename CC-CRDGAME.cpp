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

int digitSum( ll num) {
	int sum = 0;
	while (num > 0) {
		sum += num % 10;
		num /= 10;
	}
	return sum;
}

int main() {
	shammi();
	w(t) {
		int n; cin >> n;
		int chef = 0, morty = 0;
		for (int i = 0; i < n; i++) {
			int x, y; cin >> x >> y;
			if (digitSum(x) > digitSum(y)) chef++;
			else if (digitSum(x) < digitSum(y)) morty++;
			else chef++, morty++;
		}
		if (chef > morty) cout << 0 << " " << chef << nl;
		else if (chef < morty) cout << 1 << " " << morty << nl;
		else cout << 2 << " " << chef << nl;
	}
	return 0;
}