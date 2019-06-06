#include <iostream>
using namespace std;

int main() {
	int i, n = 0, wish[1000][3] = {0};
	while(cin >> i) {
		cin >> wish[i][1];
		cin >> wish[i][2];
		n++;
	}
	
	for(int i = 1; i <= n; i++) {
		if(i == wish[wish[i][1]][1]) {
			cout << i << " " << wish[i][1] << "matched" << endl;
			wish[i][1] = 0;
			wish[i][2] = 0;
			wish[wish[i][1]][1] = 0;
			wish[wish[i][1]][2] = 0;
		}
	}
	for(int i = 1; i <= n; i++) {
		if(wish[i][2] > 0 && (i == wish[wish[i][2]][1] || i == wish[wish[i][2]][2])) {
			cout << i << " " << wish[i][2] << "matched" << endl;
			wish[i][1] = 0;
			wish[i][2] = 0;
			wish[wish[i][1]][1] = 0;
			wish[wish[i][1]][2] = 0;
		}
	}
}
