#include<iostream>
#include<vector>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int k=0;k<t;k++){
		int s,w1,w2,w3;
		cin >> s >> w1 >> w2 >> w3;
		int count =0;
		for(int i=0;i<3;i++){
			if((w1+w2+w3)<=s){
				count++;
				break;
			}else{
				if((w1+w2)<=s){
					count++;
					w1=0;
					w2=0;
					continue;
				}else{
					if(w1<=s){
						w1=0;
						count++;
						continue;
					}
				}
			}
		}
		if(count == 0){
			int temp;
			temp = w1;
			w1 = w3;
			w3 = temp;
			for(int i=0;i<3;i++){
				if((w1+w2+w3)<=s){
					count++;
					break;
				}else{
					if((w1+w2)<=s){
						count++;
						w1=0;
						w2=0;
						continue;
					}else{
						if(w1<=s){
							w1=0;
							count++;
							continue;
						}
					}
				}
			}
		}

		cout << count << "\n";	
	}

	return 0;
}