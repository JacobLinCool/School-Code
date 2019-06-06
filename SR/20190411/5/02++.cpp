#include <iostream>
using namespace std;

// 分析各種胺基酸次數 

int main() {
	string dna;
	while(cin >> dna) {
		string p = "";
		for(int i = 0; i < dna.length(); i++) {
			if(i%3==0)
				p += "(";
			if(dna[i] == 'U')
				p += "A";
			if(dna[i] == 'A')
				p += "U";
			if(dna[i] == 'C')
				p += "G";
			if(dna[i] == 'G')
				p += "C";
			if(i%3==2)
				p += ")";
		}
		string words[1+p.length()/5];
		int counts[1+p.length()/5] = {0}, w = 0;
		for(int i = 0; i < p.length(); i+=5) {
			for(int j = 0; j < w+1; j++) {
				if(words[j].substr(0, 5) == p.substr(i, 5)) {
					counts[j]++;
					break;
				}
				if(j == w) {
					words[w] = p.substr(i, 5);
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
