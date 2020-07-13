#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int leadingZeroes(int n){
    int zeroes=0,i=5;
    while(n/i!=0){
        zeroes += n/i;
        i=i*5;
    }
    return zeroes;
}
int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n,counter=0;
        cin >> n;
        vector<int> v;
        for(int i=100000;i>=5;i--){
            if(leadingZeroes(i)==n) v.push_back(i);
            // else i-=5;
        }
        sort(v.begin(), v.end());
        printf("%d\n",v.size());
        for(int i=0;i<v.size();i++){
            printf("%d ",v[i]);
        }
        printf("\n");
    }
    return 0;
}