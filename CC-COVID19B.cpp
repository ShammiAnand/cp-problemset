/*
This code is written by Shammi Anand
contact : shammianand101@gmail.com, shammianand.me
*/
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define f               first
#define s               second
#define vi              vector<int>
#define pii             pair<int, int>
#define rep(i,a,n)      for(int i=a;i<n;i++)
#define F(i,n)          for(int i=0;i<n;i++)
#define all(a)          a.begin(), a.end()
#define print(a)        for(auto x : a) cout << x << " ";
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


bool isSorted(vi& arr) {
	for (int i = 0; i < arr.size() - 1; i++) {
		if (arr[i] > arr[i + 1]) return false;
	}
	return true;
}


int three(vi& arr) {
	if (isSorted(V)) {
		cout << 1 << " " << 1 << nl;
	} else {
		int mn = 100, mx = 0, count = 1;
		for (int i = 0; i < n; i++) {
			count = 1;
			for (int j = i + 1; j < n; j++) {
				if (V[j] < V[i]) {
					count++;
				}
			}
			for (int j = 0; j < i; j++) {
				if (V[j] > V[i]) {
					count++;
				}
			}
			mx = max(count, mx);
			mn = min(mn, count);
		}

		cout << mn << " " << mx << nl;
	}
}

int four(vi& arr) {

}

int five(vi& arr) {

}

void solve(vi& arr, int n) {
	if (n == 3) {
		three(vi & arr);
	} else if (n == 4) {
		four(vi & arr);
	} else {
		five(vi & arr);
	}
}


int main() {
	shammi();
	w(t) {
		int n; cin >> n;
		vi V(n);
		for (int& elem : V) {
			cin >> elem;
		}
		// if (isSorted(V)) {
		// 	cout << 1 << " " << 1 << nl;
		// } else {
		// 	int mn = 100, mx = 0, count = 1;
		// 	for (int i = 0; i < n; i++) {
		// 		count = 1;
		// 		for (int j = i + 1; j < n; j++) {
		// 			if (V[j] < V[i]) {
		// 				count++;
		// 			}
		// 		}
		// 		for (int j = 0; j < i; j++) {
		// 			if (V[j] > V[i]) {
		// 				count++;
		// 			}
		// 		}
		// 		mx = max(count, mx);
		// 		mn = min(mn, count);
		// 	}

		// 	cout << mn << " " << mx << nl;
		// }
	}
	return 0;
}