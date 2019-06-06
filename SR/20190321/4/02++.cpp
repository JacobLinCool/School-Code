#include <iostream>
using namespace std;

int main() {
	string sa, a;
	int n;
	cin >> sa >> n;
	int free[n-1];
	while(n--) {
		cin >> free[n];
	}
	while(cin >> a) {
		int score=0;
		for(int i = 0; i < sa.length(); i++) {
			int f = 0;
			for(int j = 0; j < sizeof(free); j++) {
				if(i+1 == free[j]) {
					score++;
					f=1;
				}
			}
			if(a[i] == sa[i] && f == 0) {
				score++;
			}
		}
		cout << score << endl;
	}
}
