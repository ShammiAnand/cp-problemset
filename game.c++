#include<iostream>
using namespace std;
int main(){
    int n;
    for(int i=0;;i++){
        cin >> n;
        if(n<7){
            cout << "Too Small! Guess Again\n";
            continue;
        }else if(n>7){
            cout << "Too Big! Guess Again\n";
            continue;
        }else{
            cout << "You guessed it! \n";
            break;
        }

    }
    return 0;
}