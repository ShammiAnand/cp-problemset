#include<iostream>
using namespace std;
int check( int n){
	if(n<100){
		return n;
	}else{
		return 100;
	}
}
int negCheck(int n){
	if(n<0){
		return 0;
	}else{
		return n-1;
	}
}

int main(){
	int t;
	cin >> t;
	for(int k=0;k<t;k++){
		int n,x,y;
		cin >> n >> x >> y;
		int M[n];
		for(int i=0;i<n;i++){
			cin >> M[i];
		}
		int H[100];
		for(int i=0;i<100;i++){
			H[i]=-1;
		}
		for(int i=0;i<n;i++){
			for(int j = negCheck((M[i]-(x*y)));j<check(M[i]+(x*y));j++){
				H[j] = 0;
			}
		}
		int count =0;
		for(int i=0;i<100;i++){
			if(H[i]==-1){
				count++;
			}
		}
		// cout << "\n";
		cout << count << "\n";
	}
	return 0;
}