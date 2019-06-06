#include <iostream>
using namespace std;

// 輸出更多資訊 

int main() {
	string dna1, dna2;
	while(cin >> dna1 >> dna2) {
		int n=0, x=0;
		for(int i = 0; i < dna1.length(); i++) {
			if(dna1[i] == dna2[i]) {
				n++;
			} else {
				x++;
			}
		}
		if((float)n/(float)dna1.length() >= 0.8) {
			cout << "Yes, there are " << n << " nucleobase(s) are the same and " << x << " nucleobase(s) are different. Probability: " << (float)n/(float)dna1.length()*100 << "%"<< endl;
		} else {
			cout << "No, there are only " << n << " nucleobase(s) are the same but " << x << " nucleobase(s) are different. Probability: " << (float)n/(float)dna1.length()*100 << "%"<< endl;
		}
	}
}
