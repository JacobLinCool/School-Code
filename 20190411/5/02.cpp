#include <iostream>
using namespace std;

int main() {
	string dna;
	while(cin >> dna) {
		for(int i = 0; i < dna.length(); i++) {
			if(dna[i] == 'A')
				cout << "U";
			if(dna[i] == 'T')
				cout << "A";
			if(dna[i] == 'C')
				cout << "G";
			if(dna[i] == 'G')
				cout << "C";
		}
		cout << endl;
	}
}
