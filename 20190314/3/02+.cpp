#include <iostream>

using namespace std;

int main() {
	int a, n=0;
	while(cin >> a) {
		if(a>=90) {
			cout << "A";
		} else if(a>=80) {
			cout << "B";
		} else if(a>=70) {
			cout << "C";
		} else if(a>=60) {
			cout << "D";
		} else {
			cout << "F";
			n++;
		}
		cout << endl;
	}
	cout << "不及格人數" << n << endl;
	return 0;
}
