#include <iostream>
using namespace std;

int main() {
	int i, n = 0, wish[1000] = {0};
	while(cin >> i) {
		cin >> wish[i];
		n++;
	}
	
	for(int i = 1; i <= n; i++) {
		if(i == wish[wish[i]]) {
			cout << i << " " << wish[i] << "matched" << endl;
			wish[i] = 0;
			wish[wish[i]] = 0;
		}
	}
}
