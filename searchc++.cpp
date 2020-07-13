#include<iostream>
using namespace std;

// void insertionSort(int arr[], int num){
//   for(int i=1;i<num;i++){
//     int curr = arr[i];
//     for(int j=i-1;j>=0&&arr[j]>curr;j--){
//       //j+1th elem is the current elem
//       //valueof the current elem is already saved in curr
//       //therefore swapping takes place in two lines
//       arr[j+1]=arr[j];
//       arr[j]=curr;
//     }
    
//   }
//   // showArray(arr, num);
// }

int linearSearch(int arr[],int num,int target){
	for(int i=0;i<num;i++){
		if(arr[i]==target){
			return i;
		}
	}
	return -1;
}
int binarySearch(int arr[], int num, int target){
	//only works on sorted array
	int low = 0, high=num-1,mid;
	mid = (low+high)/2;
	while(arr[mid]!=target&&low<=high){
		if(target>arr[high]){
			low = mid+1;
		}else{
			high = mid-1;
		}
		mid = (low+high)/2;
	}
	if(arr[mid]==target){
		return mid;
	}else{
		return -1;
	}

}



int main(){
	int num,target;
	cin >> num;
	cin >> target;
	int arr[num];
	for(int i=0;i<num;i++){
		cin >> arr[i];
	}

	int indexL = linearSearch(arr,num,target);
	// printf("\nLinear Search index = %d\n",indexL);

	// insertionSort(arr,num);

	int indexB = binarySearch(arr,num,target);
	printf("\nBinary Search index = %d\n",indexB);

	return 0;
}