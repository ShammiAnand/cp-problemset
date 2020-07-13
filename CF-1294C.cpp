#include<iostream>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
       int n,factors[3],c=0;

       cin>>n;

       for(int i=2;i*i<n&&c<2;i++) if(n%i==0) factors[c++]=i,n/=i;

       if(c!=2) cout << "No\n";
       else printf("YES\n%d %d %d\n",factors[0],factors[1],n);
    }
    return 0;
}