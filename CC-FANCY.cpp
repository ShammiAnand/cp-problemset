#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string quote,word;
    cin >> t;
    getline(cin,quote);
    for(int i = 0; i < t; i++){
    	word = "";
    	
        bool flag = false;
    	getline(cin,quote);
    	// cout << quote << endl;
    	int len=quote.length();
        vector<string> v;
        for(int i=0;i<len;i++){
            if(quote[i] == ' '){
                v.push_back(word);
                word = "";
            }
            else{
                word = word + quote[i];
            }
        }
        v.push_back(word);
		int b = v.size();
        for(int i = 0; i < b; i++){
            if(v[i] == "not"){
             flag = true;
             break;
            }
        }
        // for(int i = 0; i < b; i++){
        // 	cout << v[i] << endl;
        // }
        if(flag == true){
            cout << "Real Fancy" << endl;
        }
        else{
            cout << "regularly fancy" << endl;
        }
    }
    return 0;
}