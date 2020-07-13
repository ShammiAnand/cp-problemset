#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b,c,count=0;
		cin >> a >> b >> c;
		while(a>0&&b>0&&c>0){
			if(b%a==0&&c%b==0){
				printf("%d\n%d %d %d\n",count,a,b,c);
				break;
			}
			if(b>a&&b%a!=0){
				if(a-(b%a)<b%a){
					count+=(a-b%a);
					b+=(a-b%a);
				}else{
					count+=b%a;
					b-=b%a;
				}
			}
			if(c>b&&c%b!=0){
				if(b-(c%b)<c%b){
					count+=(b-(c%b));
					c+=(b-(c%b));
				}else{
					count+=c%b;
					c-=c%b;
				}
			}
		}
	}
	return 0;
}