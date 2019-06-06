#include <iostream>
using namespace std;

// 檢測出錯誤的鹼基對數量及位置 

int main() {
	string dna1, dna2;
	while(cin >> dna1 >> dna2) {
		int c[dna1.length()] = {0};
		int x = 0;
		for(int i = 0; i < dna1.length(); i++) {
			if(dna1[i] == 'A' && dna2[i] != 'T') {
				c[i] = 1;
				x += 1;
				continue;
			} else if(dna1[i] == 'T' && dna2[i] != 'A') {
				c[i] = 1;
				x += 1;
				continue;
			} else if(dna1[i] == 'C' && dna2[i] != 'G') {
				c[i] = 1;
				x += 1;
				continue;
			} else if(dna1[i] == 'G' && dna2[i] != 'C'){
				c[i] = 1;
				x += 1;
				continue;
			}
		}
		if(x) {
			cout << "Error Occurred " << x << " Time(s) At: ";
			for(int i = 0; i < dna1.length(); i++) {
				if(c[i]==1) {
					cout << i+1 << " ";
				}
			}
			cout << endl;
		} else {
			cout << "The DNA Is OK, No Error Occurred." << endl;
		}
	}
}
