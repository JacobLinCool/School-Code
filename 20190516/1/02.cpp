#include <iostream>
using namespace std;

int main() {
	int n;
	while(cin >> n) {
		int m[2][n];
		for(int k = 0; k < 2; k++) for(int i = 0; i < n; i++) cin >> m[k][i];
		for(int i = 0; i < n-1; i++) cout << m[0][i] + m[1][i] << " ";
		cout << m[0][n-1] + m[1][n-1] << endl;
	}
}
