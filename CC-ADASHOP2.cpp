#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int r,c;
		scanf("%d%d",&r,&c);
		int m=24;
		int squares[64][2]={{4,4},{3,5},{4,6},{6,4},{4,2},{1,5},{4,8},{8,4},{7,3},{8,2},{7,1},{6,2},{5,1},{4,2},{3,1},{1,3},{6,8},{7,7},{8,8},{7,7},{8,6},{6,4},{2,8},{1,7}};
		printf("%d\n",m);
		for(int i=0;i<24;i++){
			printf("%d %d\n",squares[i][0],squares[i][1]);
		}
	}
	return 0;
}