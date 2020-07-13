#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,odd=0,even=0,c1=0,c2=0;
		cin >> n;
		int a[n],pos[n],e[n],o[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			if(a[i]%2==0){
				even++;
				e[c1++]=i;
			}else{
				odd++;
				o[c2++]=i;
			}
		}
		if(even>0) printf("%d\n%d\n",1,e[0]+1);
		else if(odd>1) printf("%d\n%d %d\n",2,o[0]+1,o[1]+1);
		else printf("-1\n");
	}
	return 0;
}