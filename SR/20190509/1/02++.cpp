#include<iostream>
using namespace std;

int main(){
	int a, min, max;
	cin >> min >> max;
	while(cin >> a) {
		if(a >= min && a <= max) cout << a << endl;
	}
	return 0;
}
