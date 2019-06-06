#include <iostream>
using namespace std;

int main() {
	int n;
	while(cin >> n) {
		int c = n;
		for(int i = 1; i < n; i++) {
			c += i;
		}
		cout << c << endl;
	}
}
