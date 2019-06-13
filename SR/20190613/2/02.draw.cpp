#include <iostream>
using namespace std;

int main() {
	int width, height;
	while(cin >> height >> width) {
		int maze[height][width] = {0};
		for(int i = 0; i < height; i++)
			for(int j = 0; j < width; j++)
				cin >> maze[i][j];
		int lastStep = 0, trail[height*width][3] = {0};
		trail[0][0] = 1;
		trail[0][1] = 1;
		int loc[2];
		while(trail[lastStep][0] != height - 2 || trail[lastStep][1] != width - 2) {
			if(trail[lastStep][2] == 4) {
				lastStep--;
				continue;
			}
			loc[0] = trail[lastStep][0];
			loc[1] = trail[lastStep][1];
			if(!maze[loc[0]][loc[1]+1] && (lastStep == 0 || loc[1]+1 != trail[lastStep-1][1]) && trail[lastStep][2] < 1) {
				cout << "Go right: " << lastStep << " status: " << trail[lastStep][2] << endl;
				lastStep++;
				trail[lastStep][0] = loc[0];
				trail[lastStep][1] = loc[1]+1;
				trail[lastStep-1][2] = 1;
				continue;
			} else {
				if(trail[lastStep][2] < 1)
					trail[lastStep][2] = 1;
			} 
			if(!maze[loc[0]+1][loc[1]] && (lastStep == 0 || loc[0]+1 != trail[lastStep-1][0]) && trail[lastStep][2] < 2) {
				cout << "Go down: " << lastStep << " status: " << trail[lastStep][2] << endl;
				lastStep++;
				trail[lastStep][0] = loc[0]+1;
				trail[lastStep][1] = loc[1];
				trail[lastStep-1][2] = 2;
				continue;
			} else {
				if(trail[lastStep][2] < 2)
					trail[lastStep][2] = 2;
			}
			if(!maze[loc[0]][loc[1]-1] && (lastStep == 0 || loc[1]-1 != trail[lastStep-1][1]) && trail[lastStep][2] < 3) {
				cout << "Go left: " << lastStep << " status: " << trail[lastStep][2] << endl;
				lastStep++;
				trail[lastStep][0] = loc[0];
				trail[lastStep][1] = loc[1]-1;
				trail[lastStep-1][2] = 3;
				continue;
			} else {
				if(trail[lastStep][2] < 3)
					trail[lastStep][2] = 3;
			}
			if(!maze[loc[0]-1][loc[1]] && (lastStep == 0 || loc[0]-1 != trail[lastStep-1][0]) && trail[lastStep][2] < 4) {
				cout << "Go up: " << lastStep << " status: " << trail[lastStep][2] << endl;
				lastStep++;
				trail[lastStep][0] = loc[0]-1;
				trail[lastStep][1] = loc[1];
				trail[lastStep-1][2] = 4;
				continue;
			} else {
				if(trail[lastStep][2] < 4)
					trail[lastStep][2] = 4;
			}
			trail[lastStep][2] = 0;
			lastStep--;
			cout << "Back to " << lastStep << endl;
		}
		for(int i = 0; i <= lastStep; i++) {
			maze[trail[i][0]][trail[i][1]] = 8;
		}
		for(int i = 0; i < height; i++) {
			for(int j = 0; j < width; j++)
				cout << maze[i][j];
			cout << endl;
		}
		cout << "XX" << endl;
	}
}
