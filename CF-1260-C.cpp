#include<iostream>
#include<algorithm>
using namespace std;

void swapInt(long long int* a,long long int* b){
	int* temp;
	*temp = *a;
	*a= *b;
	*b = *temp;
}
long long int gcd(long long int a,long long int b) { 
   if (b == 0) 
      return a; 
   return gcd(b, a % b);  
} 

int main(){
	int n;
	long long int  r,b,k;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> r >> b >> k;
		// if(k<b/r||k<r/b){
		// 	cout << "REBEL" <<"\n";
		// }else{
		// 	cout << "OBEY" <<"\n";
		// }
		long long int a = gcd(r,b); 
		if(r > b){
			swapInt(&r,&b);
		}
		if(b%r==0){
			if(b/r>k){
				cout << "REBEL" <<"\n";
			}else{
				cout << "OBEY" <<"\n";
			}

		}else{
			if(b>(k-1)*a+1){
				cout << "REBEL" <<"\n";

			}else{
				cout << "OBEY" <<"\n";

			}
		}
		
	}
	return 0;
}