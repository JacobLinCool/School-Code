#include <iostream>
#include <algorithm>
using namespace std;

// »¼¼W+»¼´î 

int main(){
	int a[1000], n=0;
	while(cin >> a[n]) n++;
	sort(a, a+n); 
	for(int i = 0; i < n; i++) cout << a[i] << endl;
	cout << endl;
	while(n--) cout << a[n] << endl;
	return 0;
}
