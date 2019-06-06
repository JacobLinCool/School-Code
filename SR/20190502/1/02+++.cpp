#include <iostream>
using namespace std;

// 計算場內人數及有哪些人在場內 

int main() {
	int tmp, in[1000] = {0}, times[1000] = {0}, n=0;
	string type;
	while(cin >> tmp >> type) {
		if(type == "in") {
			if(!in[tmp]) {
				in[tmp] = 1;
				times[tmp]++;
				n++;
				cout << "---" << endl;
				cout << tmp << "號票" << times[tmp] << "次入場" << endl;
				cout << "目前場內有" << n << "人:" << endl;
				for(int i = 0; i < 1000; i++) {
					if(in[i]) {
						cout << i << "號票	";
					}
				}
				cout << endl; 
			} else {
				cout << tmp << "此門票已經入場" << endl; 
			}
		}
		if(type == "out") {
			if(in[tmp]) {
				in[tmp] = 0;
				n--;
				cout << "---" << endl;
				cout << tmp << "號票離場" << endl;
				cout << "目前場內有" << n << "人:" << endl;
				for(int i = 0; i < 1000; i++) {
					if(in[i]) {
						cout << i << "號票	";
					}
				}
				cout << endl; 
			} else {
				cout << "錯誤: " << tmp << "號票不在場內" << endl;
			}
		}
		
	}
}
