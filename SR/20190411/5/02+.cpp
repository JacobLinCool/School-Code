#include <iostream>
using namespace std;

int main() {
	string dna;
	while(cin >> dna) {
		for(int i = 0; i < dna.length(); i++) {
			if(i%3==0)
				cout << "(";
			if(dna[i] == 'U')
				cout << "A";
			if(dna[i] == 'A')
				cout << "U";
			if(dna[i] == 'C')
				cout << "G";
			if(dna[i] == 'G')
				cout << "C";
			if(i%3==2)
				cout << ")";
		}
		cout << endl;
	}
}
