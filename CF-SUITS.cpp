#include<iostream>
#include<algorithm>
// #include<math.h>
using namespace std;

int main(){
	//a  ties, b scarves, c vests and d jackets.
	int a,b,c,d,e,f;
	//1st suit : 1jacket+1tie;
	//2nd suit : 1jacket+1vest+1scarf
	int set1=0,set2=0;
	cin >> a >> b >> c >> d >> e >> f;
	int set1p=0,set2p=0;
	if(e>f){
		set1 =  min(a,d);
		set1p = set1 * e;
		d = d- set1;
		// a = a- set1;
		set2 = min(min(b,c),d);
		set2p = f * set2;
	}else{
		set2 = min(min(b,c),d);
		set2p = f * set2;
		// a=a-set2;
		d=d-set2;
		set1 = min(a,d);
		set1p = e * set1;
	}
	int total = set1p+set2p;
	// cout << "\n";
	cout << total << "\n";

	return 0;
}