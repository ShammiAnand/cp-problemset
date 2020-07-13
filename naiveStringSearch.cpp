#include<iostream>
#include<string>

using namespace std;

//finds the number of appearance of a substring in a longer string!
int naiveStringSearch(string longer, string shorter){
	int count =0;
	for(int i=0;i<longer.length();i++){
		for(int j=0;j<shorter.length();j++){
			if(shorter[j]!=longer[i+j]){
				break;
			}
			//this conditional ensures that we've come to the end of the short string;
			if(j==shorter.length()-1){
				count++;
			}
		}
	}
	return count;

}

int main(){
	string longer, shorter;
	cin >> longer;
	cin >> shorter;
	cout << "\nThe number of times the shorter string appeared in the longer string is\n"<<naiveStringSearch(longer,shorter)<<"\n";
	return 0;
}