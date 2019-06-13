#include <iostream>
using namespace std;
char c[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

int main() {
	int n;
	while(cin >> n) {
		int x[n] = {0};
		while(true) {
			int flag = 1;
			for(int i = 0; i < n; i++) {
				for(int j = 0; j < n; j++) {
					if(i==j) continue;
					if(x[i] == x[j]) flag = 0;
				}
			}
			if(flag) {
				for(int i = 0; i < n; i++)
					cout << c[x[i]];
				cout << endl;
			}
			x[n-1]++;
			for(int i = n-1; i > 0; i--) {
				if(x[i] == n) {
					x[i-1]++;
					x[i] = 0;
				}
			}
			if(x[0]==n) break;
		}
	}
}
