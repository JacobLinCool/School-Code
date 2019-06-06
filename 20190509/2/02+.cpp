#include <iostream>
#include <algorithm> 
using namespace std;

int main(){
	int a[1000], n=0;
	while(cin >> a[n]) n++;
	sort(a, a+n);
	cout << a[int(n*0.88)] << endl;
	cout << a[int(n*0.75)] << endl;
	cout << a[int(n*0.5)] << endl;
	cout << a[int(n*0.25)] << endl;
	cout << a[int(n*0.12)] << endl;
	return 0;
}
