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

	int n; cin >> n;
	int day[32] = {0};
	for (int i = 0; i < n; i++) {
		int weight;

		string message;
		cin.ignore();
		getline(cin, message);


		if (message[0] == 'G') weight = 2;
		else weight = 1;

		// cout << "#" << i + 1 << " weight = " << weight << nl;
		bool skip = false;
		for (int j = 1; j < message.length() - 1; j++) {
			if (skip) {
				skip = false;
				continue;
			}
			if (message[j] >= '0' && message[j] <= '9') {
				int num = (message[j] - '0') * 10 + (message[j + 1] - '0');
				day[num] += weight;
				skip = true;
			}
		}
	}
	int mx = 0;
	for (int i = 1; i <= 31; i++) mx = max(mx, day[i]);

	int count = 0;
	for (int i = 1; i <= 31; i++) if (mx == day[i]) count++;

	if (count > 1) cout << "No Date\n";
	else {
		if (mx == day[19] || mx == day[20]) cout << "Date\n";
		else cout << "No Date\n";
	}

	return 0;
}