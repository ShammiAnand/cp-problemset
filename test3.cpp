#include<bits/stdc++.h>
using namespace std;

#define ll             	long long
#define pb              push_back
#define mp              make_pair
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define nl				"\n"
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(x)            ll x; cin>>x; while(x--)

void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
void computeLPSArray(string pat, ll M, ll* lps) {
	// length of the previous longest prefix suffix
	ll len = 0;
	ll i = 1;
	lps[0] = 0;  // lps[0] is always 0

	// the loop calculates lps[i] for i = 1 to M-1
	while (i < M)
	{
		if (pat[i] == pat[len])
		{
			len++;
			lps[i] = len;
			i++;
		}
		else  // (pat[i] != pat[len])
		{
			// This is tricky. Consider the example.
			// AAACAAAA and i = 7. The idea is similar
			// to search step.
			if (len != 0)
			{
				len = lps[len - 1];

				// Also, note that we do not increment
				// i here
			}
			else  // if (len == 0)
			{
				lps[i] = len;
				i++;
			}
		}
	}
}
ll KMPSearch(string pat, string txt) {
	ll M = pat.length();
	ll N = txt.length();

	// create lps[] that will hold the longest
	// prefix suffix values for pattern
	ll lps[M];
	ll j = 0;  // index for pat[]

	// Preprocess the pattern (calculate lps[]
	// array)
	computeLPSArray(pat, M, lps);

	ll i = 0;  // index for txt[]
	ll res = 0;
	ll next_i = 0;

	while (i < N)
	{
		if (pat[j] == txt[i])
		{
			j++;
			i++;
		}
		if (j == M)
		{
			// When we find pattern first time,
			// we iterate again to check if there
			// exists more pattern
			j = lps[j - 1];
			res++;

			// We start i to check for more than once
			// appearance of pattern, we will reset i
			// to previous start+1
			if (lps[j] != 0)
				i = ++next_i;
			j = 0;
		}

		// mismatch after j matches
		else if (i < N && pat[j] != txt[i])
		{
			// Do not match lps[0..lps[j-1]] characters,
			// they will match anyway
			if (j != 0)
				j = lps[j - 1];
			else
				i++;
		}
	}
	return res;
}
int main() {
	shammi();
	string txt, pat; cin >> txt;
	ll n; cin >> n;
	vector < pair < ll ,  string> > scores;
	for (ll i = 0; i < n; i++) {
		string wrd; ll scr;
		cin >> wrd >> scr;
		scores.pb({scr, wrd});
	}
	ll curr_score = 0, kmp = 0;
	// sort(scores.begin(), scores.end());
	for (ll i = 0; i < scores.size(); i++) {
		ll present = 0;
		size_t found = txt.find(scores[i].second);
		if (found != string::npos) {
			curr_score += scores[i].first;
			present += scores[i].first;
			while (true) {
				string word = scores[i].second;
				// char arr[] = word;
				found = txt.find(word, found + 1);
				if (found != string::npos) {
					curr_score += scores[i].first;
					present += scores[i].first;
				}
				else break;
			}
		}
		kmp += scores[i].first * KMPSearch(scores[i].second, txt);
		cout << scores[i].second << " " <<  present / scores[i].first << nl;
		present = 0;
	}
	cout << curr_score << nl;
	cout << kmp << nl;
	return 0;
}