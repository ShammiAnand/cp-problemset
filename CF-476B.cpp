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

int calculate(string S) {
	int sum = 0;
	for (char c : S) {
		if (c == '+') sum++;
		else sum--;
	}
	return sum;
}



int main() {
	shammi();
	string original, received; cin >> original >> received;
	int target = calculate(original);
	int canReach = 0;
	vector<int> unknown;

	for (int i = 0; i < received.length(); i++) {
		if (received[i] == '?') {
			unknown.pb(i);
		} else {
			canReach += (received[i] == '+' ? 1 : -1);
		}
	}
	if (unknown.size() == 0) {
		if (target == calculate(received)) puts("1.0000000000000");
		else puts("0.0000000000000");
		return 0;
	}
	int distance = target - canReach;
	double answer;
	if ((distance + (int)unknown.size()) % 2 != 0 || (int)unknown.size() < abs(distance)) {
		answer = 0;
	} else {
		int m = ((int)unknown.size() + abs(distance)) / 2;
		int c = 1 ;
		for (int i = 0; i < m; i++)
			c *= (int)unknown.size() - i ;
		for (int i = 2; i <= m; i++)
			c /= i ;
		answer = (double)c / (1 << (int)unknown.size()) ;
	}
	printf("%.12f\n", answer);
	return 0;
}