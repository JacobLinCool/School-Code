#include <iostream>
using namespace std;

int main() {
	unsigned long long n, f[30];
	f[0] = 0, f[1] = 1, f[2] = 1;
	for(unsigned long long i = 3; i < 30; i++) {
		f[i] = f[i-1] + f[i-2];
	}
	while(cin >> n) {
		cout << f[n] << endl;
	}
}
