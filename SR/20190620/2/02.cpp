#include <iostream>
using namespace std;

int main() {
	int limit, kind;
	while(cin >> limit >> kind) {
		int fruit[kind][2];
		for(int i = 0; i < kind; i++)
			cin >> fruit[i][0] >> fruit[i][1];
		int item[limit], value[limit];
		for(int i = 0; i < limit; i++)
			item[i] = -1;
		for(int i = 0; i < limit; i++)
			value[i] = 0;
		for(int i = 0; i < kind; i++) {
			for(int j = 0; j < limit; j++) {
				int n = 1;
				int newV = 0;
				while(fruit[i][0]*n <= j+1) {
					newV = fruit[i][1]*n;
					n++;
					if(i == 3 && j == 5) cout << fruit[i][0]*n << endl;
				}
				if(newV > value[j]) {
					value[j] = newV;
					item[j] = i;
				}
				
				
				for(int k = 0; k < limit; k++)
					cout << item[k] << " ";
				cout << endl;
				for(int k = 0; k < limit; k++)
					cout << value[k] << " ";
				cout << endl;
			}
		}
		int total = 0, c = limit-1;
		while(true) {
			total += value[c];
			c -= fruit[item[c]][0];
			if(!value[c]) break;
		}
		cout << total << endl;
		for(int i = 0; i < limit; i++)
			cout << item[i] << " ";
		cout << endl;
		for(int i = 0; i < limit; i++)
			cout << value[i] << " ";
		cout << endl;
	}
}
