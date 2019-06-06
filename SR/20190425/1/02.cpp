#include <iostream>
using namespace std;

int main() {
	int m;
	string s;
	cin >> m;
	while(getline(cin, s)) {
		for(int i = 0; i < s.length(); i++) {
			cout << char(int(s[i])+m);
		}
		cout << endl;
	}
}
