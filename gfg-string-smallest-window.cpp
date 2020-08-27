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
    w(t) {
        string S, T; cin >> S >> T;
        int n = S.length();
        int freq[n][26], t_freq[26];
        memset(freq, 0, sizeof(freq));
        memset(t_freq, 0, sizeof(t_freq));
        vector<int> counts;
        for (int i = 0; i < (int)T.length(); i++) {
            t_freq[T[i] - 'a']++;
        }
        int end = -1;
        int count = 1;
        freq[0][S[0] - 'a']++;
        for (int i = 1; i < n; i++) {
            count++;
            for (int j = 0; j < 26; j++) {
                freq[i][j] += freq[i - 1][j];
            }
            freq[i][S[i] - 'a']++;

            // for (int j = 0; j < 26; j++) cout << char(j + 'a') << " " << freq[i][j] << " ";
            // cout << nl;
            bool matched = true;
            for (int j = 0; j < 26; j++) {
                if (t_freq[j] > 0) {
                    if (t_freq[j] != freq[i][j]) {
                        matched = false;
                        break;
                    }
                }
            }
            if (matched) {
                end = i;
                counts.pb(count);
                count = 0;
            }
        }
        if (end == -1) {
            cout << "Why here!\n";
            cout << -1 << nl;
            return 0;
        } else {
            bool ok = true;
            int begin;
            //string ans = S.substr(0, final+1);
            int curr_freq[26] = {0};
            for (int i = end; i >= 0; i--) {
                ok = true;
                curr_freq[S[i] - 'a']++;
                for (int j = 0; j < 26; j++) {
                    if (t_freq[j] > 0) {
                        if (t_freq[j] != curr_freq[j]) {
                            ok = false;
                            break;
                        }
                    }
                }
                if (ok) {
                    begin = i;
                    break;
                }
            }

            string final_ans = S.substr(begin, end + 1);
            cout << final_ans << nl;
        }
    }
    return 0;
}