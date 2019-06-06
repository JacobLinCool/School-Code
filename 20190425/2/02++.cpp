#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

// Combine HEX to ASCII and ASCII to HEX

int a() {
	cout << "==== HEX <-> ASCII ====" << endl;
	cout << "Mode 1: " << setw(6) << "HEX" << setw(6) << " -->" << setw(6) << "ASCII" << endl;
	cout << "Mode 2: " << setw(6) << "ASCII" << setw(6) << " -->" << setw(6) << "HEX" << endl;
	cout << "Which Mode Do You Want To Use? ";
	int mode;
	string n;
	while(cin >> mode) {
		if(mode == 0) {
			cout << "Type 'Bye' To Leave The Application. :D" << endl;
			return 0;
		}
		while(mode == 1) {
			string n;
			cout << "Type 'Exit' To Leave" << endl;
			cout << "Enter HEX Code: ";
			while(getline(cin, n)) {
				if(n=="Exit" || n == "exit") {
					cout << "Exitted." << endl;
					mode = 0;
					break;
				}
				for(int i = 0; i < n.length(); i+=2) {
					cout << (char)(int)strtol(n.substr(i,2).c_str(), NULL, 16);
				}
				cout << endl;
			}
		}
		while(mode == 2) {
			string s;
			cout << "Type 'Exit' To Leave" << endl;
			cout << "Enter ASCII Code: ";
			while(getline(cin, s)) {
				if(s=="Exit" || s == "exit") {
					cout << "Exitted." << endl;
					mode = 0;
					break;
				}
				for(int i = 0; i < s.length(); i++) {
				cout << hex << int(s[i]);
			}
			cout << endl;
			}
		}
		for(int i = 0; i < n.length(); i+=2) {
			cout << (char)(int)strtol(n.substr(i,2).c_str(), NULL, 16);
		}
		cout << endl;
		if(mode == 0) {
			cout << "If you want to leave the application, type '0'." << endl;
			a();
		}
	}
}

int main() {
	a();
}


