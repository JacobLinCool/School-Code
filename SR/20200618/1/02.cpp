#include <iostream>
using namespace std;
int num[9][9],dup;

bool isDup(int x,int y,int v) {
    for(int i = 0; i < 9; i++) {
        if(num[y][i] == v) return 1;
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
