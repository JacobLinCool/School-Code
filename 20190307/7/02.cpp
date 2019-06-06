#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	while(cin >> a >> b) {
		c = (a*2+b)%3;
		if(c==0) {
			cout << "´¶³q\n";
		} else if(c==1) {
			cout << "¦N\n";
		} else {
			cout << "¤j¦N\n";
		}
	}
	return 0;
}
