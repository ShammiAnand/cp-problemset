#include<iostream>
using namespace std;
#define ll long long
ll F(ll a[],ll x,ll n){
    //position of next number in the arr where a[x]<a[z]
    if(x>=n||x<0) return -1;
    else{
        for(ll i=x+1;i<n;i++){
            if(a[i]>a[x]) return i;
        }
        return -1;
    }
}
ll G(ll a[],ll x,ll n){
    //position of next number in the arr where a[x]<a[z]
    if(x>=n||x<0) return -1;
    else{
        for(ll i=x+1;i<n;i++){
            if(a[i]<a[x]) return i;
        }
        return -1;
    }
}

int main(){
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i=0;i<n;i++) cin >> arr[i];
    for(ll i=0;i<n;i++){
        if(G(arr,F(arr,i,n),n)==-1) cout << -1 << " ";
        else cout << arr[G(arr,F(arr,i,n),n)] << " ";
    }
    cout << endl;
    return 0;
}