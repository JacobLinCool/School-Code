#include <iostream>
using namespace std;

int main() {
	int x[5]={0};
	int n=1;
	while(true) {
		cout << n++ << ":";
		for(int i = 0; i < 5; i++) {
			if(!x[i]) cout << i;
		}
		cout << endl;
		x[4]++;
		for(int i = 4; i > 0; i--) {
			if(x[i] == 2) {
				x[i-1]++;
				x[i] = 0;
			}
		}
		if(x[0]==2) break;
	}
}
