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

int main() {
	shammi();
	map<string, int> names;
	w(n) {
		string S; cin >> S;
		if (names.find(S) != names.end()) {
			//name exists
			string temp = S + to_string(names[S]);
			names[S]++;
			cout << temp << nl;
			names[temp]++;
		} else {
			//name dosen't exists
			names[S]++;
			cout << "OK\n";
		}
	}
	return 0;
}