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


int main() {
	shammi();


	string S; cin >> S;
	map<char, int> mp;



	// int arr[100];
	// vector<vector<int>> vec;
	// vector<int> arr[100];
	// pair<int, int> arr[100];

	//26 alphabets letters
	//10^5
	// int freq[26] = {0};
	// memset(freq, 0, sizeof(freq)); // -1, 0 , 1


	//ababc
	vector<pair<int, char>> vec;



	for (int i = 0; i < S.length(); i++) {
		// freq[S[i] - 'a'] += 1 ;
		mp[S[i]]++;

		//key exist -> frequency++
		// else -> create -> frequency

		// a b c d
	}

	// for (int i = 0; i < 26; i++) {
	// 	if (freq[i] > 0) cout << char(i + 'a') << " " << freq[i] << nl;
	// }

	for (auto x : mp) {
		vec.push_back({x.second, x.first});
	}
	sort(vec.begin(), vec.end());

	for (auto elem : vec) {
		cout << elem.second << " " << elem.first << nl;
	}

	// for (auto c : S) {
	// 	c
	// }























	return 0;
}