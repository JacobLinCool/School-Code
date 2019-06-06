#include <iostream>
using namespace std;

int main() {
	string sa, a;
	int free;
	cin >> sa >> free;
	while(cin >> a) {
		int score=0;
		for(int i = 0; i < sa.length(); i++) {
			if(i+1 == free) {
				score++;
			} else if(a[i] == sa[i]) {
				score++;
			}
		}
		cout << score << endl;
	}
}
