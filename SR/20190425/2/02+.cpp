#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	string n;
	while(getline(cin, n)) {
		for(int i = 0; i < n.length(); i+=2) {
			cout << (char)(int)strtol(n.substr(i,2).c_str(), NULL, 16);
		}
		cout << endl;
	}
}
