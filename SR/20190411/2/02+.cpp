#include <iostream>
using namespace std;

int main() {
	string dna1, dna2;
	while(cin >> dna1 >> dna2) {
		int n=0;
		for(int i = 0; i < dna1.length(); i++) {
			if(dna1[i] == dna2[i]) {
				n++;
			}
		}
		if((float)n/(float)dna1.length() >= 0.8) {
			cout << "Y" << endl;
		} else {
			cout << "N" << endl;
		}
	}
}
