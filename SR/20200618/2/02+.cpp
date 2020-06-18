#include <bits/stdc++.h>
using namespace std;
int num[9][9],dup,N=1;

bool isDup(int x,int y,int v) {
    for(int i = 0; i < 9; i++) {
        if(num[y][i] == v) return 1;
    }

    for(int i = 0; i < 9; i++) {
        if(num[i][x] == v) return 1;
    }

    int blockX = x / 3, blockY = y / 3;
    for(int i = blockY * 3; i < (blockY + 1) * 3; i++) {
        for(int j = blockX * 3; j < (blockX + 1) * 3; j++) {
            if(num[i][j] == v) return 1;
        }
    }
    return 0;
}

void sol(int n) {
    if(n == 81) {
        cout << "ans:" << N++ << "\n";
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                cout << num[i][j] << " ";
            }
            cout << "\n";
        }
        return;
    }

    int x = n % 9, y = n / 9;

    if(num[y][x]) {
        sol(n+1);
        return;
    }
    for(int i = 1; i < 10; i++) {
        if(!isDup(x, y, i)) {
            num[y][x] = i;
            sol(n+1);
        }
    }

    num[y][x] = 0;
}

int main(){
	while(cin >> num[0][0]) {
        N = 1;
		for(int i = 1; i < 9; i++) cin >> num[0][i];
		for(int i = 1; i < 9; i++)
            for(int j = 0; j < 9; j++)
                cin >> num[i][j];

        cout << "puzzle>>\n";
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++)
                cout << num[i][j] << " ";
            cout << "\n";
        }

        sol(0);
	}
	return 0;
}
