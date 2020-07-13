#include <iostream>
// #include <algorithm>
using namespace std;
int main(){
	int t,p_overall=0;
	cin >> t;
	while(t--){
		int row,col;
		char ch;
		int mx_req[4]={0};
		int timings[4][4]={0};
		int n,time,profit=0;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> ch >> time;
			timings[ch-'A'][(time/3)-1]++;
		}
		row=0;
		col=0;
		int mx=-1,price=100;
		// int s=4,r=4,c=4;
		int counter=0;
		for(int z=0;z<4;z++){

			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					if(timings[i][j]>mx){
						mx=timings[i][j];
						row=i;
						col=j;
					}
				}
			}
			profit = profit + (mx*price);
			price = price - 25;
			mx_req[counter++]=mx;
			mx=-1;
			for(int i=0;i<4;i++){
				timings[row][i]=-1;
				timings[i][col]=-1;
			}
		}
		for(int i=0;i<counter;i++){
			if(mx_req[i]==0) profit-=100;
		}

		printf("%d\n",profit);
		p_overall+=profit;
		profit=0;
	}
	printf("%d\n",p_overall);
	p_overall=0;
	return 0;
}