#include <iostream>
using namespace std;

int main() {
	char x;
	string dna;
	while(cin >> x >> dna) {
		int n=0;
		for(int i = 0; i < dna.length(); i++) {
			if(dna[i] == x) {
				n++;
			}
		}
	cout << n << endl;
	}
}
