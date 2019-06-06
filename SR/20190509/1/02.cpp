#include<iostream>
using namespace std;

int main(){
	int a, min = 99999;
	while(cin >> a) {
		if(a < min) min = a;
	}
	cout << min << endl;
	return 0;
}
