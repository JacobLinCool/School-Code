#include <iostream>
using namespace std;

int main() {
	int n, m;
	while(cin >> n >> m) {
		int y[100][100];
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) cin >> y[i][j];
		} 
		for(int i = 0; i < m; i++) {
			for(int j = n-1; j >= 0; j--) {
				cout << y[j][i] << " ";
				if(!j) cout << endl;
			}
		}
	}
}
