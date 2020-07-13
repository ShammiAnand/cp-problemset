#include <bits/stdc++.h> 
using namespace std; 
 
#define ll long long int 
 
const int MAX_CHAR = 26; 
const int MAX_FACT = 20; 
ll fact[MAX_FACT]; 
 
void precomputeFactorials() 
{ 
	fact[0] = 1; 
	for (int i = 1; i < MAX_FACT; i++) 
		fact[i] = fact[i - 1] * i; 
} 
 
// function for nth permutation 
void nPermute(char str[], ll length, ll n){ 
	precomputeFactorials(); 
	ll len = length;
	int freq[MAX_CHAR] = { 0 }; 
	
 	freq[0] = len-2;
 	freq[1] = 2;
	// out string for output string 
	char out[MAX_CHAR]; 
 
	// iterate till sum equals n 
	ll sum = 0; 
	ll k = 0; 
 
	// We update both n and sum in this 
	// loop. 
	while (sum != n) { 
 
		sum = 0; 
		// check for characters present in freq[] 
		for (int i = 0; i < 2; i++) { 
			if (freq[i] == 0) 
				continue; 
 
			// Remove character 
			freq[i]--; 
 
			// calculate sum after fixing 
			// a particuar char 
			ll xsum = fact[len - 1 - k]; 
			for (int j = 0; j < 2; j++) 
				xsum /= fact[freq[j]];
			sum += xsum; 
 
			// if sum > n fix that char as 
			// present char and update sum 
			// and required nth after fixing 
			// char at that position 
			if (sum >= n) { 
				out[k++] = i + 'a'; 
				n -= (sum - xsum); 
				break; 
			} 
 
			// if sum < n, add character back 
			if (sum < n) 
				freq[i]++; 
		} 
	} 
 
	// if sum == n means this char will provide its 
	// greatest permutation as nth permutation 
	for (int i=MAX_CHAR-1; k < len && i >= 0; i--) 
		if (freq[i]) { 
			out[k++] = i + 'a'; 
			freq[i++]--; 
		} 
 
	// append string termination 
	// character and print result 
	out[k] = '\0'; 
	cout << out << "\n"; 
} 
 
// Driver program 
int main(){ 
	int t;
	cin >> t;
	while(t--){
		ll n,pa;
		cin >> n >> pa;
		char str[n];
		for(ll i=0;i<n-2;i++) str[i]='a';
		str[n-2]='b';
		str[n-1]='b';
		nPermute(str,n,pa); 
	}
	return 0; 
} 