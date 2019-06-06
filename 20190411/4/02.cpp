#include <iostream>
using namespace std;

int main() {
	string article;
	while(cin >> article) {
		for(int i = article.length()-2; i >= 0; i-=2) {
			cout << article.substr(i, 2);
		}
	cout << endl;
	}
}
