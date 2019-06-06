#include <iostream>
using namespace std;

int main() {
	string article, word;
	cin >> article;
	while(cin >> word) {
		int n=0;
		for(int i = 0; i < article.length(); i+=2) {
			if(article.substr(i, 2) == word) {
				n++;
			}
		}
	cout << word << n << endl;
	}
}
