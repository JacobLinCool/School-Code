#include <iostream>
using namespace std;

int main() {
	int x[5]={0,0,0,0,0};
	while(true) {
		int flag = 1;
		for(int i = 0; i < 5; i++) {
			for(int j = 0; j < 5; j++) {
				if(i==j) continue;
				if(x[i] == x[j]) flag = 0;
			}
		}
		if(flag) cout << x[0] << x[1] << x[2] << x[3] << x[4] << endl;
		x[4]++;
		for(int i = 4; i > 0; i--) {
			if(x[i] == 5) {
				x[i-1]++;
				x[i] = 0;
			}
		}
		if(x[0]==5) break;
	}
}
