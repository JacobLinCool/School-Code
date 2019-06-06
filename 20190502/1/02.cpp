#include <iostream>
using namespace std;

int main() {
	int tmp, in[1000] = {0};
	string type;
	while(cin >> tmp >> type) {
		if(!in[tmp]) {
			in[tmp] = 1;
		} else {
			cout << tmp << "此門票已經入場" << endl; 
		}
	}
}
