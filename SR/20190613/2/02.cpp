#include <iostream>
using namespace std;
int maze[102][102];
int a, b;
void step(int x, int y) {
	if(maze[x][y] == 0) {
		maze[x][y] = 8;
		if(x==a-2&&y==b-2) {
			for(int i = 0; i < a; i++) {
				for(int j = 0; j < b; j++) {
					cout << maze[i][j];
				}
				cout << endl;
			}
			cout << "XX" << endl;
		} else {
			step(x, y+1);
			step(x+1, y);
			step(x, y-1);
			step(x-1, y);
		}
		maze[x][y] = 0;
	}
}

int main() {
	while(cin >> a >> b) {
		for(int i = 0; i < a; i++) 
			for(int j = 0; j < b; j++)
				cin >> maze[i][j];
		step(1,1);
	}
}
