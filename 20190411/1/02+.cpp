#include <iostream>
using namespace std;

int main() {
	string dna1, dna2;
	while(cin >> dna1 >> dna2) {
		int c = 0;
		for(int i = 0; i < dna1.length(); i++) {
			if(dna1[i] == 'A' && dna2[i] != 'T') {
				c = 1;
				continue;
			} else if(dna1[i] == 'T' && dna2[i] != 'A') {
				c = 1;
				continue;
			} else if(dna1[i] == 'C' && dna2[i] != 'G') {
				c = 1;
				continue;
			} else if(dna1[i] == 'G' && dna2[i] != 'C'){
				c = 1;
				continue;
			}
		}
		if(c) {
			cout << "X MEN" << endl;
		} else {
			cout << "Human" << endl;
		}
	}
}
