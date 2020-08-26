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
	string S; cin >> S;
	int freq[26] = {0};
	for (int i = 0; i < S.length(); i++) {
		freq[S[i] - 'a']++;
	}
	sort(freq, freq + 26, greater<int>());

	if (freq[1] != 0) cout << freq[0]*freq[1] << nl;
	else cout << freq[0]*(freq[0] - 1) / 2 << nl;
	return 0;
}