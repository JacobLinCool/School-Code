#include <iostream>
#include <string>
using namespace std;

int main() {
	string s, f;
	while(getline(cin, f)) {
		getline(cin, s);
		int m = -27;
		string tmp;
		for(;++m < 27;) {
			tmp = "";
			for(int i = 0; i < s.length(); i++) {
				tmp += char(int(s[i])+m);
			}
			int check = tmp.find(f);
			if(check!=string::npos) {
				break;
			}
		}
		cout << m << " " << tmp << endl;
	}
}
