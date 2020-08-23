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
	w(t) {
		int n; cin >> n;
		vector<vector<int>> vertices(n + 1);
		// int graph[n + 1][n + 1];
		int canVisit[n + 1] = {0}; //0 means can visit , -1 means can't;
		for (int i = 0; i < n - 1; i++) {
			int u, v; cin >> u >> v;
			vertices[u].pb(v);
			vertices[v].pb(u);
		}
		int P[n + 1], A[n + 1], B[n + 1];
		for (int i = 1; i <= n; i++) {
			cin >> P[i];
		}
		for (int i = 1; i <= n; i++) {
			cin >> A[i];
		}
		for (int i = 1; i <= n; i++) {
			cin >> B[i];
		}
		int D[n + 1];
		int days = 0;
		memset(D, -1, sizeof(D));
		for (int i = 1; i <= n; i++) {
			//number of days : i
			for (int j = 0; j < vertices[P[i]].size(); j++) {
				if (B[P[vertices[P[i]][j]]] == 0) continue;
				if (canVisit[P[vertices[P[i]][j]]] == 0) { //I can visit this town
					B[P[vertices[P[i]][j]]] -= min(A[P[i]], B[P[vertices[P[i]][j]]]);
					if (B[P[vertices[P[i]][j]]] == 0) {
						days[P[vertices[P[i]][j]]] = i;
					}
					//subrelations
					for (int k = 0; k < vertices[vertices[P[j]][j]]].size(); k++) {
						if (vertices[P[j]][j] == vertices[vertices[P[j]][j]]][k]) {
							continue;
						} else {
							B[vertices[vertices[P[j]][j]][k]] -= min(A[P[i]], B[vertices[vertices[P[j]][j]][k]]);
							if (B[vertices[vertices[P[j]][j]][k]] == 0) {
								days[vertices[vertices[P[j]][j]][k]] = i;
							}
						}
					}
				}
			}
			if (canVisit[P[i]] != -1) canVisit[P[i]] = -1;
		}
		//answer:
		for (int i = 1; i <= n; i++) {
			cout << days[i] << " ";
		}
		cout << nl;
	}
	return 0;
}