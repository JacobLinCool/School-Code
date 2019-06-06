#include <iostream>

using namespace std;

int main() {
	float a, b;
	while(cin >> a >> b) {
		float bmi = a / (b*b);
		if(bmi <16.5 || bmi > 31.5) {
			cout << "N";
		} else {
			cout << "Y";
		}
		cout << endl;
	}
	return 0;
}
