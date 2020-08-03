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
vector <int> bruteForceSol(int n, int* arr) {
	int a = 0, b = 0, c = 0;
	for (int i = 1; i < n - 1; i++) {
		bool fa = false, fc = false;
		for (int j = 0; j < i; j++) {
			if (arr[j] < arr[i]) {
				a = j + 1;
				fa = true;
				break;
			}
		}
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				fc = true;
				c = j + 1;
				break;
			}
		}
		if (fa && fc) {
			b = i + 1;
			return {a, b, c};
		}
	}
	return { -1};
}
int main() {
	shammi();
	w(t) {
		int n; cin >> n;
		int arr[n], pref[n], suff[n], hash[n + 1];
		// int mn = 1001;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			// mn = min(mn, arr[i]);
			// pref[i] = mn;
			// hash[arr[i]] = i;
		}
		// mn = 1001;
		// for (int i = n - 1; i >= 0; i--) {
		// 	mn = min(mn, arr[i]);
		// 	suff[i] = mn;
		// }
		// int a = 0, b = 0, c = 0;
		// bool possible = false;
		// for (int  i = 1; i < n - 1; i++) {
		// 	if (arr[i] > pref[i] && arr[i] > suff[i]) {
		// 		possible = true;
		// 		// idx = i + 1;
		// 		b = i + 1;
		// 		a = hash[pref[i]] + 1;
		// 		c = hash[suff[i]] + 1;
		// 		break;
		// 	}
		// }
		vector <int> sol = bruteForceSol(n, arr);

		if (sol[0] != -1) printf("YES\n%d %d %d\n", sol[0], sol[1] , sol[2]);
		else printf("NO\n");
	}
	return 0;
}