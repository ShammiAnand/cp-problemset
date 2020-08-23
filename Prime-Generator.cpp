//This program generates prime numbers between [a,b]
//using prime seive method
//author Shammi Anand
#include<iostream>
using namespace  std;
#define ll long long

void primeSieve(int *arr) {
	for (int i = 3; i <= 1000000; i += 2) arr[i] = 1;
	for (ll i = 3; i <= 1000000; i += 2) {
		if (arr[i] == 1) {
			for (ll j = i * i; j <= 1000000; j = j + i) arr[j] = 0;
		}
	}
	//special cases
	arr[2] = 1;
	arr[0] = arr[1] = 0;
}

int main() {
	//initialize an array with all elems 0
	int prime[1000005] = {0};
	primeSieve(prime);

	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		if (prime[i] == 1) cout << i << " ";
	}
	cout << endl;
	return 0;
}