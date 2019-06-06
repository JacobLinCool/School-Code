#include<iostream>
using namespace std;

// 遞增區間報價 

int main(){
	int a, min, max, match[100] = {0}, i=0;
	cin >> min >> max;
	while(cin >> a) {
		if(a >= min && a <= max) match[i++] = a;
	}
	for(int x = i-1; x >= 0; x--) {
		int mmin = 99999, tmp;
		for(int y = 0; y <= x; y++) {
			if(match[y] < mmin) {
				mmin = match[y];
				tmp = y;
			}
		}
		match[tmp] = 99999;
		cout << mmin << endl;
	}
	return 0;
}
