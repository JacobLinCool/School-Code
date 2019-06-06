#include <iostream>
using namespace std;

int main() {
	int n, m;
	while(cin >> n >> m) {
		int x[n][m], y[n][m];
		for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> x[i][j];
		for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> y[i][j];
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m-1; j++) {
				cout << x[i][j] + y[i][j] << " ";
			}
			cout << x[i][m-1] + y[i][m-1] << endl;
		}
	}
}
