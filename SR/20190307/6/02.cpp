#include <iostream>
using namespace std;

int main() {
	int a;
	while(cin >> a) {
		if(a < 0)
			a = -a;
		cout << a << endl;
	}
	return 0;
}
