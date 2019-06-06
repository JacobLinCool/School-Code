#include <iostream>
using namespace std;

// ¤ÀªR¦U¦r¦r¼Æ

int main() {
	string article;
	while(cin >> article) {
		string words[1+article.length()/2];
		int counts[1+article.length()/2] = {0}, w = 0;
		for(int i = 0; i < article.length(); i+=2) {
			for(int j = 0; j < w+1; j++) {
				if(words[j].substr(0, 2) == article.substr(i, 2)) {
					counts[j]++;
					break;
				}
				if(j == w) {
					words[w] = article.substr(i, 2);
					counts[w]++;
					w++;
					break;
				}
			}
		}
		for(int i = 0; i < w; i++) {
			cout << words[i] << ": " << counts[i] << endl;
		}
	}
}
