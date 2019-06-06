#include <iostream>
#include <iomanip>
using namespace std;

// 更精確的黃金比例 

int main() {
	unsigned long long n, f[50];
	f[0] = 0, f[1] = 1, f[2] = 1;
	for(unsigned long long i = 3; i < 50; i++) {
		f[i] = f[i-1] + f[i-2];
	}
	cout << setprecision(16) << double(f[49]) / double(f[48]) << endl;
}
