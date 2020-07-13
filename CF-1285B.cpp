#include<iostream>
#include<algorithm>
using namespace std;

long long int maxSubArraySum(long long int a[], long long int size) { 
    long long int max_so_far = INT_MIN, max_ending_here = 0; 
  
    for (int i = 0; i < size; i++) 
    { 
        max_ending_here = max_ending_here + a[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    return max_so_far; 
} 

int main(){
	int t;
	cin >> t;
	for(int k=0;k<t;k++){
		long long int n;
		cin >> n;
		long long int tasty[n],arr1[n-1],arr2[n-1];

		for(int i=0;i<n;i++){
			cin >> tasty[i];
		}
		for(int i=1;i<n;i++){
			arr1[i-1]=tasty[i];
		}
		for(int i=0;i<n-1;i++){
			arr2[i]=tasty[i];
		}

		long long int sumY=0,sumA=0;
		for(int i=0;i<n;i++){
			sumY += tasty[i];
		}
		sumA = max(maxSubArraySum(arr1,n-1),maxSubArraySum(arr2,n-1));
		(sumY>sumA)? cout << "Yes\n" : cout << "No\n";
	}
	return 0;
}