#include <iostream>
using namespace std;

int main() {
	int tmp, in[1000] = {0}, times[1000] = {0};
	string type;
	while(cin >> tmp >> type) {
		if(type == "in") {
			if(!in[tmp]) {
				in[tmp] = 1;
				times[tmp]++;
				cout << tmp << "號票" << times[tmp] << "次入場" << endl;
			} else {
				cout << tmp << "此門票已經入場" << endl; 
			}
		}
		if(type == "out") {
			if(in[tmp]) {
				in[tmp] = 0;
				cout << tmp << "號票離場" << endl;
			}
		}
		
	}
}
