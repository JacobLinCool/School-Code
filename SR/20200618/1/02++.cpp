#include <iostream>
using namespace std;
int num[9][9],dup;

bool isDup(int x,int y,int v) {
    int blockX = x / 3, blockY = y / 3;
    for(int i = blockY * 3; i < (blockY + 1) * 3; i++) {
        for(int j = blockX * 3; j < (blockX + 1) * 3; j++) {
            if(num[i][j] == v) return 1;
        }
    }
    return 0;
}

int main(){
	while(cin >> num[0][0]) {
		for(int i = 1; i < 9; i++) cin >> num[0][i];
		for(int i = 1; i < 9; i++)
            for(int j = 0; j < 9; j++)
                cin >> num[i][j];

        int n, r, c, v;
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> r >> c >> v;
            cout << isDup(c, r, v) << "\n";
        }
	}
	return 0;
}
