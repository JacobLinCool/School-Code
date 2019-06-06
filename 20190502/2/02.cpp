#include <iostream>
using namespace std;

int main() {
	long long n, f[30];
	f[0] = 0, f[1] = 1, f[2] = 1;
	while(cin >> n) {
		if(n >= 1) cout << f[1] << endl;
		if(n >= 2) cout << f[2] << endl;
		for(long long i = 3; i <= n; i++) {
			f[i] = f[i-1] + f[i-2];
			cout << f[i] << endl;
		}
	}
}
