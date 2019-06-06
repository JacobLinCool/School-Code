#include<iostream>
using namespace std;

int main(){
	int a, max = 0;
	while(cin >> a) {
		if(a > max) max = a;
	}
	cout << max << endl;
	return 0;
}
