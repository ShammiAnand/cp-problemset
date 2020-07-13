#include<iostream>
using namespace  std;

#define ll long long

void prime_sieve(int *arr){
	for(int i=3;i<=1000000;i+=2){
		arr[i]=1;
	}
	for(ll i=3;i<=1000000;i+=2){
		if(arr[i]==1){
			for(ll j=i*i;j<=1000000;j=j+i){
				arr[j]=0;
			}
		}
	}
	arr[2]=1;
	arr[0]=arr[1]=0;
}

int main() {
	int arr[1000005]={0};
	prime_sieve(arr);
	int csum[1000005]={0};

	for(int i=1;i<=1000000;i++){
		csum[i]=csum[i-1]+arr[i];
	}

	int t;
	cin >> t;
	for(int k=0;k<t;k++){
		int a,b;
		cin >> a >> b;
		cout << csum[b]-csum[a-1] << endl;
	}
	return 0;
}