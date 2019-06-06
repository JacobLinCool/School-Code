#include <iostream>
#include <algorithm> 
using namespace std;

int main(){
	int a[1000], n=0;
	while(cin >> a[n]) n++;
	sort(a, a+n);
	while(n--) cout << a[n] << endl;
	return 0;
}
