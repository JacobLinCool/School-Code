#include <iostream>
using namespace std;

int main() {
	string sa, a;
	cin >> sa;
	while(cin >> a) {
		int score=0;
		for(int i = 0; i < sa.length(); i++) {
			if(a[i] == sa[i]) {
				score++;
			}
		}
		cout << score << endl;
	}
}
