#include <iostream>
#include <algorithm> 
using namespace std;

int main(){
	int n, m;
	cin >> n;
	string a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	cin >> m;
	for(int i = 0; i < m; i++) {
		string b;
		cin >> b;
		int f = 0;
		for(int i = 0; i < n; i++) {
			if(b == a[i]) {
				f = 1;
				break;
			}
		}
		if(f) cout << "Y" << endl;
		else cout << "N" << endl;
	}
	return 0;
}
