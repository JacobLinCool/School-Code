#include <iostream>
using namespace std;

int main() {
	int n, m;
	while(cin >> n >> m) {
		int y[100][100];
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) cin >> y[j][i];
		} 
		for(int j = 0; j < m; j++) {
			for(int i = 0; i < n; i++) {
				cout << y[j][i] << " ";
				if(i == n-1) cout << endl;
			}
		}
	}
}
