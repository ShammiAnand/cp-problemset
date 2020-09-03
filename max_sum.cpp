//This code is written by Shammi Anand

/*

given N numbers(positive integers) find the maximum value of expression using +, *


*/


#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define fill(arr)       for(int i=0;i<=10000;i++) arr[i] =1;
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

int dp[1000];



int solve(vector<int>& arr) {
	int size = arr.size();
	for (int i = 0; i < size; i++) {
		int curr = i, value = 0;
		while (curr >= 0 and i - curr <= 2) {
			value += arr[curr];
			dp[i + 1] = max(dp[i + 1], dp[curr] * value);
			--curr;
		}
	}
	return dp[size];
}



int main() {
	shammi();
	int n; cin >> n;
	//Take N numbers input
	vector<int> num(n);
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < n + 1; i++) dp[i] = 1;
	cout << "maximum value of exp = " << solve(num) << nl;
	return 0;
}