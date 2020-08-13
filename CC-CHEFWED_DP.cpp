//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define Max(a,b,c)      max(a,max(b,c))
#define Min(a,b,c)      min(a,min(b,c))
#define pb              push_back
#define mp              make_pair
#define ers             clear
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

//minimum cost to reach index j when last partition was at index i : state variables!
int dp[101][1001];
int freq[101] = {0};

int main() {
	shammi();
	w(t) {
		memset(dp, 0, sizeof(dp));
		memset(freq, 0, sizeof(freq));
		int n, k; cin >> n >> k;
		int Family[n + 1];
		int mn = 1000000000;
		for (int i = 0; i < n; i++) cin >> Family[i];

		int adj[n + 1][n + 1];
		memset(adj, 0, sizeof(adj));

		// form the adj matrix!
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				if (j == 0) {
					adj[i][j] = 0;
				} else adj[i][j] = adj[i][j - 1];
				if (freq[Family[j]]) {
					// if adding for first time cost increase by 2
					if (freq[Family[j]] == 1) adj[i][j] += 2;
					else adj[i][j]++;
				}
				freq[Family[j]]++;
			}
			//set the values of freq arr to zero
			memset(freq, 0, sizeof(freq));
		}
		// cost to reach index i when partition was at 1
		for (int i = 1; i < n + 1; i++) {
			dp[1][i] = adj[0][i - 1];
		}

		// cost 1 for different partitions
		for (int i = 2; i < 101; i++) { // is it necessary?
			dp[i][1] = 0;
		}

		//calculate all possibilities!
		for (int i = 2; i < 101; i++) {
			for (int j = 2; j <= n; j++) {
				int curr_min = 1e9;
				// find the best cost to reach index (1.....j) at cost i
				for (int sub_pos = 1; sub_pos < j; sub_pos++) {
					//calculate for every sub_pos;
					curr_min = min(curr_min, dp[i - 1][sub_pos] + adj[sub_pos][j - 1]);
				}
				//store the minumun cost to reach at index j with i partitions at dp[i][j];
				dp[i][j] = curr_min;
			}
		}

		// calculate the absolute minimum from the stored values!
		for (int i  = 1; i < 101; i++) {
			mn = min(i * k + dp[i][n], mn);
		}
		cout << mn << endl;

	}
	return 0;
}