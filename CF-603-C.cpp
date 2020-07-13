#include<iostream>
#include<vector>
#include<set>
using namespace std;
bool func(int x, int y){
	return x<y;
}

int main(){
	int t;
	cin >> t;
	long long int n;
	for(int k=0;k<t;k++){
		cin >> n;
		int c=0;
		int count =0;

		vector<int> v;
		for(int i=0;i<n/2;++i){
			c= n/i;
			v.push_back(c);
			count++;
		}
		v.push_back(0);
		v.push_back(1);
		count++;
		count++;
		sort(v.begin(), v.end(),func);
		cout << "\n";
		cout << count << endl;
		for(int x:v){
			cout << x << " ";
		}
		cout << "\n";


	}
}