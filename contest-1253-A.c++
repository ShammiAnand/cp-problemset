#include<iostream>
using namespace std;

bool equalArray(int a[] , int b[] ,int num){
    for(int i=0;i<num;i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}
bool isGreater(int a[] , int b[] ,int num){
    for(int i=0;i<num;i++){
        if(a[i] > b[i]){
            return true;
        }
    }
    return false;
}

int main(){
    int t;
    scanf("%d\n",&t);
    for(int s=0;s<t;s++){
        int n;
        //question parameters
        int k=0,l=0,r=0;
        
        bool check;
        
        scanf("%d\n",&n);
        
        int a[n],b[n];
        
        for(int i=0;i<n;i++){
            scanf("%d ",&a[i]);
        }
        for(int i=0;i<n;i++){
            scanf("%d ",&b[i]);
        }
        
        //checks whether all elems are equal or not
        check = isGreater(a,b,n);
        
        //code logic 
        
        if(check){
            //if all elems are equal, print yes
            printf("NO\n");
        }else if(n==1){
            printf("YES\n");
        }
        else{
            //check if adding some number to some elems of a can make a==b
            // for(int i=0;i<n;i++){
            //     if(a[i] > b[i]){
            //         printf("NO\n");
            //         break;
            //     }
            // }
            //for loop to find k and l
            for(int i=0;i<n;i++){
                if(a[i] != b[i]){
                    k = b[i]-a[i];
                    l=i;
                    break;
                }
            }
            //for loop to find r
            for(int i=l;i<n;i++){
                if(a[i]==b[i]){
                    r = i;
                    break;
                }
                r=n;
                // }else if(a[i] != b[i] && k != b[i]-a[i]){
                //     printf("NO\n");
                //     break;
                // }else{
                //     continue;
                // }
            }
            for(int i=l;i<r;i++){
                a[i] += k;
            }
            check = equalArray(a,b,n);
            if(check){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
            
        }
        
    }
}