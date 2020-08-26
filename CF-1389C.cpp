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

bool check(string T) {
	int n = T.length();
	//left : left-shift, right : right-shift
	string left = "", right = "";
	left = T.substr(1, n) + T[0];
	right = T[n - 1] + T.substr(0, n - 1);
	return left == right;
}

int main() {
	shammi();
	w(t) {
		string T; cin >> T;

		//greedy approach!
		//iterate over all possible subsequence of T

		int ans = 0;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				int x = i, y = j, count = 0;
				for (auto c : T) {
					if (c - '0' == x) {
						swap(x, y);
						count++;
					}
				}
				if (x != y && count % 2 == 1) count--;
				ans = max(ans, count);
			}
		}
		cout << T.length() - ans << nl;
	}
	return 0;
}