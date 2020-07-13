//DP and Recursion
#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll newSum = (n/2)+(n/3)+(n/4);
		cout << max(n,newSum) << "\n";
	}
	return 0;
}