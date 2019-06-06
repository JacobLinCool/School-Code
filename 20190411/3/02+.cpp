#include <iostream>
using namespace std;

int main() {
	string article;
	while(cin >> article) {
		int n=0, m=0;
		for(int i = 0; i < article.length(); i+=2) {
			if(article.substr(i, 2) == "»¡") {
				n++;
			} else if(article.substr(i, 2) == "¹D") {
				m++;
			}
		}
		if((float)n/(float)m == 0.75) {
			cout << "Y" << endl;
		} else {
			cout << "N" << endl;
		}
	}
}
