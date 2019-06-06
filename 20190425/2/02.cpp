#include <iostream>
using namespace std;

int main() {
	string s;
	while(getline(cin, s)) {
		for(int i = 0; i < s.length(); i++) {
			cout << hex << int(s[i]);
		}
		cout << endl;
	}
}
