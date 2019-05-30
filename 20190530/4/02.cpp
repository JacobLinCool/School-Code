#include <iostream>
using namespace std;

int H(int n, char a, char b, char c) {
	if(!n) return 0;
	H(n-1, a, c, b);
	cout << "±q" << a << "·h¨ì" << c << endl;
	H(n-1, b, a, c);
}

int main() {
	int n;
	while(cin >> n) {
		H(n, 'A', 'B', 'C');
	}
}
