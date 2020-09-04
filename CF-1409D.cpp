//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define mp              make_pair
#define f               first
#define s               second
#define mod             1000000007
#define INF             1e9+7
#define nl              "\n"
#define w(x)            int x; cin>>x; while(x--)


void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

string adjust(string n, int index) {
	string num = n;
	num[index] = '0';
	int carry = 1;
	for (int i = index - 1; i >= 0; i--) {
		if (carry == 0) return num;
		if ((num[i] - '0') < 9) {
			num[i] = char('0' + (num[i] - '0') + 1);
			carry = 0;
			return num;
		} else {
			num[i] = '0';
			continue;
		}
	}
	return ("1" + num);
}

ll digitSum(const ll n) {
	ll c = n, sum = 0;
	while (c > 0) {
		sum += c % 10;
		c /= 10;
	}
	return sum;
}

ll digitSum(string n) {
	ll sum = 0;
	for (int i = 0; i < n.length(); i++) sum += (n[i] - '0');
	return sum;
}

int main() {
	shammi();
	w(t) {
		ll n, s; cin >> n >> s;
		if (digitSum(n) <= s) {
			cout << 0 << nl;
			continue;
		} else {
			string num = to_string(n);
			ll target = digitSum(n);
			ll copy = n;
			ll counter = num.length() - 1;
			// if (counter == 1) {
			// 	cout <<
			// }
			ll p = 1;
			ll ans = 0;
			while (target > s && counter >= 0) {
				ans += ((10 - (num[counter] - '0')) * pow(10, p - 1));
				// cout << "Added = " << ((10 - (num[counter] - '0')) * pow(10, p - 1)) << nl;
				num = adjust(num, counter);
				target = (digitSum(num)) - (num[counter] - '0');
				// cout << num << nl;
				counter--;
				// cout << "counter = " <<  counter << nl;
				p++;
			}
			cout << ans << nl;
		}
	}
	return 0;
}