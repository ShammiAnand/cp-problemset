//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll             	long long
#define Max(a,b,c)		max(a,max(b,c))
#define pb              push_back
#define mp              make_pair
#define mod             1000000007
#define nl				"\n"
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
		int n, k; cin >> n >> k;
		int one = 0;
		string tables; cin >> tables;
		vector <int> diff;
		int count = 0;
		int inc = 0;
		bool skip = false;
		if (tables[0] == '0') skip = true;
		for (int i = 0; i < n; i++) {
			if (tables[i] == '1') {
				one++;
				if (count > 0 && !skip) {
					diff.pb(count);
				} else {
					if (count > 0) {
						inc += count;
						skip = false;
					}
				}
				count = 0;
			} else {
				count++;
			}
		}
		int answer = 0;
		for (auto dist : diff) { // 1...1
			if (dist - 2 * k > 0) {
				answer += (dist - 2 * k) / k;
			}
		}
		if (count - k > 0 && one != 0) { //1....
			answer += (count - k) / k;
		}
		if (inc - k > 0 && one != 0) { // ...1
			answer += (inc - k) / k;
		}
		if (one == 0) { // ......
			if (count > 0) ++answer;
			count--;
			if (count - k > 0) answer += (count - k) / k;
		}
		cout << answer << nl;
	}
	return 0;
}