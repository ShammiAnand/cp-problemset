#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,s1,s2;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	cout << "Enter the length of first array:\t";
	cin >> s1;
	cout << "Enter the length of second array:\t";
	cin >> s2;
	cout << "Enter the elements of first sorted array\n";
	while(s1--){
		cin >> n;
		v1.push_back(n);
	}

	cout << "Enter the elements of second sorted array\n";
	while(s2--){
		cin >> n;
	 	v2.push_back(n);
	}
	int i=0,j=0;
	while(i<v1.size()&&j<v2.size()){
		if(v1[i]<v2[j]) v3.push_back(v1[i++]);
		else v3.push_back(v2[j++]);
	}
	while(i<v1.size()) v3.push_back(v1[i++]);
	while(j<v2.size()) v3.push_back(v2[j++]);

	cout << "Sorted array:\n";
	for(int i=0;i<v3.size();i++) cout << v3[i] << " ";
	cout << endl;

	return 0;
}