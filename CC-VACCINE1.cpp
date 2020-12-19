/*
@author: Shammi Anand
@contact: shammianand101@gmail.com
@website: shammianand.live
@problem: https://www.codechef.com/DEC20B/problems/VACCINE1
*/

#include <bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define f               first
#define s               second
#define vi              vector<int>
#define pii             pair<int, int>
#define F(i,n)          for(int i=0;i<n;i++)
#define all(a)          a.begin(), a.end()
#define INF             1e9+7
#define nl              "\n"
#define w(x)            int x; cin>>x; while(x--)

template<typename T_vector>
void output(const T_vector &v, int start = -1, int end = -1) {
	if (start < 0) start = 0;
	if (end < 0) end = int(v.size());

	for (int i = start; i < end; i++) {
		cout << v[i] << (i < end - 1 ? ' ' : '\n');
	}
}

void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int ceil(int a, int b) {
	return (a % b == 0 ? a / b : (a / b) + 1);
}

int main() {
	shammi();
	int D1, V1, D2, V2, P; cin >> D1 >> V1 >> D2 >> V2 >> P;

	if (D1 > D2) {
		swap(D1, D2);
		swap(V1, V2);
	}

	int d = (P / V1) + (P % V1 > 0) + D1 - 1;

	if (d < D2)
		cout << d << endl;
	else {
		int num = P + (D1 - 1) * V1 + (D2 - 1) * V2;
		int den = V1 + V2;
		d = (num / den) + (num % den > 0);
		cout << d << endl;
	}
	return 0;
}