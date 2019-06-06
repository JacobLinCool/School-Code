#include <iostream>
using namespace std;

float bmi(float w, float h) {
	return (w/(h*h));
}

int main() {
	float a, b;
	while(cin >> a >> b) {
		cout << bmi(a, b) << endl;
	}
}
