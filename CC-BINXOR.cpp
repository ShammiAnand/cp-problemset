#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

long long fac[100001];

long long power(long long x, long long y, long long p){
    long long res = 1;
    x = x % p;
    while (y > 0){
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}

long long modInverse(long long n, long long p){
    return power(n, p-2, p);
}

long long nCrModPFermat(long long n,long long r, long long p){
   if (r==0)
      return 1;
  	//(a*b)%m = (a%m*b%m)%m
   return ((fac[n]%p)* (modInverse(fac[r], p) % p)%p * (modInverse(fac[n-r], p) % p)) % p;
}


int main(){

    long long p = 1e9+7;
    fac[0] = 1;
    for (int i=1 ; i<=100000; i++)
        fac[i] = ((fac[i-1]%p)*(i%p))%p;
	int t;
	cin >> t;
	for(int s=0;s<t;s++){
		long long n;
		cin >> n;
		string a , b;
		cin >> a >> b;

		long long Cmax=0,Cmin=0,n2=0,n1=0;

		for(int i=0;i<n;i++){
			if(a[i]=='1')
				n1++;
			if(b[i]=='1')
				n2++;
		}

		long long small = min(n1,n2);
		long long big = max(n1,n2);

		Cmin = big - small;
		if(small + big > n){
            Cmax = (2*n) - (small + big);
		}
		else{
            Cmax = small + big;
		}
		Cmin = abs(n2 - n1);
		long long total = 0;
		for(int i = Cmin;i <= Cmax;i += 2){
			total += nCrModPFermat(n,i,p);
		}


		cout << total << "\n";
		// cout << "Max " << Cmax << "\n";
		// cout << "Min " << Cmin << "\n";


	}
	return 0;
}