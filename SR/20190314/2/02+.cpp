#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string a;
	while(cin >> a) {
		int x = a.length();
		int check = 0;
		while(x--) {
			int n = a.at(x);
			if(n<=57 && n>= 48)
				check = 1;
		}
		if(check) {
			cout << "Y";
		} else {
			cout << "N";
		}
		cout << endl;
	}
	
	return 0;
}
