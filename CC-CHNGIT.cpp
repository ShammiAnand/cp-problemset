// #include<iostream>
// using namespace std;

// bool isEqual( int arr[] , int n) {
// 	for(int i=0;i<n-1;i++){
// 		if(arr[i]!= arr[i+1]){
// 			return false;
// 		}
// 	}
// 	return true;
// }

// int main(){
// 	int t;
// 	int n;
// 	cin >> t;
// 	for(int k=0;k<t;k++){
// 		cin >> n;
// 		int arr[n];
// 		for(int i=0;i<n;i++){
// 			cin >> arr[i];
// 		}
// 		int count =0;
// 		if(arr[0]!= arr[1]){
// 			arr[0] = arr[1];
// 			count++;
// 		}
// 		if(isEqual(arr,n)&&n>2){
// 			cout << 0 << "\n";
// 		}else{
// 			for(int i=1;i<n-1;i++){
// 				//0 and 1 index are equal
// 				if(arr[i]==arr[i+1]&&arr[i]!=arr[i-1]){
// 					arr[i-1]=arr[i];
// 					count++;
// 				}else if(arr[i]==arr[i-1]&&arr[i]!=arr[i+1]){
// 					arr[i+1]=arr[i];
// 					count++;
// 				}
// 			}
// 			if(isEqual(arr,n)){
// 				cout << count << "\n";
// 			}else{
// 				cout << "Error" << "\n";
// 			}
// 			// cout << count << "\n";
// 		}
// 	}
// 	return 0;
// }
// In The Name Of The Queen
#include<iostream>
#include<map>
using namespace std;
int main()
{
	int q;
	scanf("%d", &q);
	for (; q; q --)
	{
		int n, a, Mx = 0;
		scanf("%d", &n);
		map < int , int > MP;
		for (int i = 0; i < n; i ++)
			scanf("%d", &a), MP[a] ++;
		for (auto X : MP)
			Mx = max(Mx, X.second);
		printf("%d\n", n - Mx);
	}
	return 0;
}





























