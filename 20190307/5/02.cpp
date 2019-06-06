#include <iostream>
using namespace std;

int main() {
	int a;
	while(cin >> a) {
		if(a%2 == 0) {
			cout << "°¸¼Æ\n";
		} else {
			cout << "©_¼Æ\n";
		}
	}
	return 0;
}
