#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,c,n;
		scanf("%d %d %d %d",&a,&b,&c,&n);
		int arr[3]={a,b,c};
		sort(arr,arr+3);
		int rem= n-(arr[2]-arr[0])-(arr[2]-arr[1]);
		if(rem>=0&&rem%3==0) puts("YES");
		else puts("NO");
	}
	return 0;
}