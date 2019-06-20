#include <iostream>
using namespace std;

int main() {
	int n;
	while(cin >> n) {
		int s[n];
		for(int i = 0; i < n; i++) {
			cin >> s[i];
		}
		int l[n][n] = {0};
		for(int i = 0; i < n; i++) {
			l[i][0] = s[i];
		}
		int length[n];
		for(int i = 0; i < n; i++) {
			int test = s[i];
			int index = 1;
			for(int j = i+1; j < n; j++) {
				if(test < s[j]) {
					l[i][index++] = s[j];
					test = s[j];
				}
			}
			length[i] = index;
		}
		int longest = 1;
		for(int i = 0; i < n; i++) {
			if(length[i] > longest) longest = length[i];
		}
		/*
		for(int i = 0; i < n; i++) {
			cout << i << ": ";
			for(int j = 0; j < n; j++) {
				if(l[i][j]) cout << l[i][j];
				else {
					break;
				}
			}
			cout << endl;
		}
		*/
		cout << longest << endl;
	}
}
