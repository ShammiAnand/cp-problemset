#include <iostream>
using namespace std;

void showArray(int arr[], int num){
  for(int i=0;i<num;i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

void bubbleSort(int arr[], int num){
  for(int i=num;i>0;i--){
    bool noSwap = true;
    for(int j=0;j<i-1;j++){
      if(arr[j]>arr[j+1]){
        int temp = arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        noSwap = false;
      }
    }
    if(noSwap) break;
  }
  showArray(arr, num);
}

void selectionSort(int arr[], int num){
  for(int i=0;i<num;i++){
    int lowest = i;
    for(int j=i+1;j<num;j++){
      if(arr[lowest]>arr[j]){
        lowest = j;
      }
    }
    //now swap the lowest with the initial when they're not equal
    if(lowest != i){
      int temp = arr[i];
      arr[i]=arr[lowest];
      arr[lowest]=temp;
    }
  }
  showArray(arr,num);
}

void insertionSort(int arr[], int num){
  for(int i=1;i<num;i++){
    int curr = arr[i];
    for(int j=i-1;j>=0&&arr[j]>curr;j--){
      //j+1th elem is the current elem
      //valueof the current elem is already saved in curr
      //therefore swapping takes place in two lines
      arr[j+1]=arr[j];
      arr[j]=curr;
    }
    
  }
  showArray(arr, num);
}

int main() {

  int num;
  cin >> num;
  int arr[num];
  for(int i=0;i<num;i++){
    cin >> arr[i];
  }
  cout << "Given Array :"<<endl;
  showArray(arr,num);
  cout << "Bubble Sort :"<<endl; 
  bubbleSort(arr,num);
  cout << "Selection Sort :"<<endl;
  selectionSort(arr,num);
  cout << "Insertion Sort :"<<endl;
  insertionSort(arr,num);

  return 0;
  
}