#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	// int segments[10]={6,2,5,5,4,5,6,3,7,6};
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n%2==0){
			for (int i = 0; i <n/2; ++i){
				printf("%d",1);
			}
			cout << endl;
		}else{
			printf("%d",7);
			for (int i = 0; i < (n/2)-1 ; ++i){
				printf("%d",1);
			}
			cout << endl;
		}
	}
	return 0;
}