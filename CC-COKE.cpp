#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	//n:no.of cans,m:time to reach home,k:ambient temp outside
	//l,r:lower and upper bounds of desired temp
	int n,m,k,l,r;
	//c:temp of cans, p:price of cans 
	int c,p;
	for(int j=0;j<t;j++){
		cin >> n >> m >> k >> l >> r;
		int arr[n][2];
		for(int i=0;i<n;i++){
			cin >> arr[i][0] >> arr[i][1];
		}
		//temperature calibratioon
		for(int i=0;i<n;i++){
			if(arr[i][0]<k-1){
				arr[i][0] = arr[i][0] + m;
			}else if(arr[i][0]>k+1){
				arr[i][0] = arr[i][0] - m;

			}else{
				arr[i][0] = k;
			}
		}
		//finding minimum price according to given constraints
		int curr_min = 1000000;
		for(int i=0;i<n;i++){
			if(arr[i][0]>=l&&arr[i][0]<=r){
				if(arr[i][1]<=curr_min){
					curr_min = arr[i][1];
				}
			}
		}

		// cout << "\n";

		if(curr_min==1000000){
			cout << -1 << "\n";
		}else{
			cout << curr_min << "\n";
		}

	}

	return 0;
}



//solved